/*********以下程序只完成了部分静态语义检查，需自行补充完整*******************/
#include "def.h"
SymbolStackDef AST::SymbolStack=SymbolStackDef();    //初始化静态成员符号表

map <int,int> TypeWidth={{T_CHAR,1},{T_INT,4},{T_FLOAT,8}}; //各类型所占字节数
map <char,string> KindName={{'V',"变量"},{'F',"函数"},{'P',"形参"}}; //各类型所占字节数


vector <Error>Errors:: Errs={};
void Errors::ErrorAdd(int Line,int Column,string ErrMsg)
{
    Error e={Line,Column,ErrMsg};
    Errs.push_back(e);
}
void Errors::ErrorsDisplay()
{
    for(auto a:Errs)
        cout<<"第"<<a.Line<<"行、第"<<a.Column<<"列处错误: "<<a.ErrMsg<<endl;
}

string NewAlias()
{
    static int num=0;
    return "V_"+to_string(++num);
}
void DisplaySymbolTable(SymbolStackDef *SYM)
{
    for(int i=0;i<SYM->Symbols.size();i++)
    {
        cout<<"----------------------------------------------------------------------"<<endl;
        cout<<" 层号: "<<i<<endl;
        cout<<" 符 号 名           别名    类型    种 类   其它信息"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        if (SYM->Symbols.at(i)->Symbols.size()==0)
            cout<<"  空 表"<<endl;
        else
        for(int j=0;j<SYM->Symbols.at(i)->Symbols.size();j++)
        {
            Symbol *SymPtr=SYM->Symbols.at(i)->Symbols.at(j);   //取第i层第j个符号对象的指针
            cout.width(20);
            cout<<SymPtr->Name;
            cout.width(8);
            if (SymPtr->Kind=='V' || SymPtr->Kind=='P')   //符号是变量,形参,显示别名
                cout<<((VarSymbol*)SymPtr)->Alias;
            else cout<<" ";
            cout.width(8);
            cout<<SymbolMap[SymPtr->Type];
            cout.width(8);
            cout<<KindName[SymPtr->Kind];
            if (SymPtr->Kind=='V' || SymPtr->Kind=='P')   //符号是变量,形参
                cout<<"偏移量: "<<((VarSymbol*)SymPtr)->Offset;
            else if (SymPtr->Kind=='F')  //符号是函数
            {
                cout<<"形参数: "<<((FuncSymbol*)SymPtr)->ParamNum;
                cout<<"  变量空间: "<<((FuncSymbol*)SymPtr)->ARSize;
            }
            else if (SymPtr->Kind=='A');  //符号是数组，需要显示各维大小
            cout<<endl;
        }
        cout<<"----------------------------------------------------------------------"<<endl;
    }
}
bool IsLeftValue(ExpAST *PExp)
{
    if (typeid(*PExp)==typeid(VarAST)) return true; //对简单变量、数组下标变量,需要查符号表
    return false;
}

bool IsConstValue(ExpAST *PExp) 
{
    if (typeid(*PExp)==typeid(ConstAST)) return true;
    return false;
}

Symbol * SymbolStackDef::LocateNameCurrent(string Name)  //在当前(最内层)作用域中查找该符号是否有定义
{
    SymbolsInAScope *curScope=Symbols.back();
    for(int i=0;i<curScope->Symbols.size();i++)
        if (curScope->Symbols.at(i)->Name==Name)
            return curScope->Symbols.at(i);
    return nullptr;
}

Symbol * SymbolStackDef::LocateNameGlobal(string Name)//由内向外，整个符号表中查找该符号是否有定义
{
    for(int i=Symbols.size()-1;i>=0;i--)
    {
        for(int j=0;j<Symbols.at(i)->Symbols.size();j++)
            if (Symbols.at(i)->Symbols.at(j)->Name==Name)
                return Symbols.at(i)->Symbols.at(j);

    }
    return nullptr;
}

void ProgAST::Semantics0()
{
    int Offset=0;
    Semantics(Offset);
    Errors::ErrorsDisplay();
}

void ProgAST::Semantics(int &Offset)
{
    SymbolsInAScope *Global=new SymbolsInAScope();  //全局变量的作用域符号表，记录外部变量、函数名
    SymbolStack.Symbols.push_back(Global);
    GlobalSymbolTable=Global;                       //程序对象挂一个全局符号表

    //预先设置缺省函数read和write
    FuncSymbol *FuncDefPtr=new FuncSymbol();
    FuncDefPtr->Name=string("read");
    FuncDefPtr->Type=T_INT;
    FuncDefPtr->Kind='F';
    FuncDefPtr->ParamNum=0;
    FuncDefPtr->ARSize=12;
    SymbolStack.Symbols.back()->Symbols.push_back(FuncDefPtr);
    FuncDefPtr=new FuncSymbol();
    FuncDefPtr->Name=string("write");
    FuncDefPtr->Type=T_VOID;
    FuncDefPtr->Kind='F';
    FuncDefPtr->ParamNum=1;
    FuncDefPtr->ARSize=4;
    SymbolStack.Symbols.back()->Symbols.push_back(FuncDefPtr);

    VarSymbol *VarDefPtr=new VarSymbol();
    VarDefPtr->Name=VarDefPtr->Alias=string("x");
    VarDefPtr->Type=T_INT;
    VarDefPtr->Kind='P';
    VarDefPtr->Offset=4;
    SymbolStack.Symbols.back()->Symbols.push_back(VarDefPtr);

    for(auto a:ExtDefs)
    {
        a->Semantics(Offset);
    }
    DisplaySymbolTable(&SymbolStack);
}

void ExtVarDefAST::Semantics(int &Offset)  //外部定义对象的语义
{
    for(auto a:ExtVars)
        a->Semantics(Offset,Type);
}


void VarDecAST::Semantics(int &Offset,TypeAST *Type)
{
    if (!SymbolStack.LocateNameCurrent(Name))  //当前作用域未定义，将变量加入符号表
    {
         VarDefPtr=new VarSymbol();
         VarDefPtr->Name=Name;
         VarDefPtr->Alias=NewAlias();
         if (!Dims.size())VarDefPtr->Kind='V';
         else VarDefPtr->Kind='A';
         if (typeid(*Type)==typeid(BasicTypeAST))
             VarDefPtr->Type=((BasicTypeAST*)Type)->Type;
         VarDefPtr->Offset=Offset;   Offset+=TypeWidth[VarDefPtr->Type];
         if (Exp)                      //有初值表达式时的处理
            Exp->Semantics(Offset);
         SymbolStack.Symbols.back()->Symbols.push_back(VarDefPtr);
    }
    else Errors::ErrorAdd(Line,Column,"变量 "+Name+" 重复定义") ;

}

void DefAST::Semantics(int &Offset)
{    //依次提取变量符号进行语义分析
     for(auto a:LocVars)
            a->Semantics(Offset,Type);
}

void BasicTypeAST::Semantics(int &Offset)
{
}

void FuncDefAST::Semantics(int &Offset)
{
    if (!SymbolStack.LocateNameCurrent(Name))  //当前作用域未定义，将变量加入符号表
    {
        int Offset=12;            //局部变量偏移量初始化,预留12个字节存放返回地址等信息，可根据实际情况修改
        MaxVarSize=12;            //计算函数变量需要的最大容量
        FuncDefPtr=new FuncSymbol();
        FuncDefPtr->Name=Name;
        FuncDefPtr->Kind='F';
        if (typeid(*Type)==typeid(BasicTypeAST))     //处理符号项的返回类型，目前仅基本类型T_CHAR,T_INT,T_FLOAT
             FuncDefPtr->Type=((BasicTypeAST*)Type)->Type;
        FuncDefPtr->ParamNum=Params.size();

        SymbolsInAScope *Local=new SymbolsInAScope();  //生成函数体作用域变量表
        FuncDefPtr->ParamPtr=Local;                    //函数符号表项，指向形参
        SymbolStack.Symbols.back()->Symbols.push_back(FuncDefPtr);//填写函数符号到符号表


        SymbolStack.Symbols.push_back(Local);          //函数体符号表（含形参）进栈
        Body->LocalSymbolTable=Local;
        for(auto a:Params)
            a->Semantics(Offset);              //未考虑参数用寄存器，只是简单在AR中分配单元
        int isReturn=0;
        Body->Semantics(Offset, 0, 0, isReturn, ((BasicTypeAST*)Type)->Type);               //对函数中的变量，在AR中接在参数后分配单元
        if(isReturn==0 && ((BasicTypeAST*)Type)->Type!=T_VOID)
            Errors::ErrorAdd(Line,Column,"函数没有返回语句");
        FuncDefPtr->ARSize=MaxVarSize; //函数变量需要空间大小（未考虑临时变量），后续再加临时变量单元得到AR大小
    }
    else Errors::ErrorAdd(Line,Column,"函数 "+Name+" 重复定义");
}
void ParamAST::Semantics(int &Offset)
{
    if (!SymbolStack.LocateNameCurrent(ParamName->Name))  //当前作用域未重复定义，将形参名加入符号表
    {
         VarSymbol *SymPtr=new VarSymbol();
         SymPtr->Name=ParamName->Name;
         SymPtr->Kind='P';
         SymPtr->Alias=NewAlias();
         if (typeid(*Type)==typeid(BasicTypeAST))
             SymPtr->Type=((BasicTypeAST*)Type)->Type;
         SymPtr->Offset=Offset;   Offset+=TypeWidth[SymPtr->Type];
         SymbolStack.Symbols.back()->Symbols.push_back(SymPtr);
    }
    else Errors::ErrorAdd(Line,Column,"形参名 "+ParamName->Name+" 重复定义");

}

/**************语句显示******************************/
void CompStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    if (!LocalSymbolTable)          //如果不是函数体的复合语句，需自行生成局部符号表
    {
        SymbolsInAScope *Local=new SymbolsInAScope();  //全局变量的作用域符号表，记录外部变量、函数名
        SymbolStack.Symbols.push_back(Local);
        LocalSymbolTable=Local;                       //程序对象挂一个符号表
    }
    for(auto a:Decls)
        a->Semantics(Offset);
    if (Offset>MaxVarSize) MaxVarSize=Offset;
    for(auto a:Stms)
    {
        int Offset_S=Offset;      //前后并列语句可以使用同一片单元，所以取最大值，这里保存起始偏移量
        a->Semantics(Offset, canBreak, canContinue, isReturn, returnType);
        if (Offset>MaxVarSize) MaxVarSize=Offset;
        Offset=Offset_S;
    }
    cout<<"\n\n********************当前复合语句符号表状态**************************"<<endl;
    DisplaySymbolTable(&SymbolStack);
    cout<<endl<<endl;
    SymbolStack.Symbols.pop_back();     //复合语句的符号表退栈
}

void ExprStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    Exp->Semantics(Offset);
}
void IfStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    Cond->Semantics(Offset);
    ThenStm->Semantics(Offset, canBreak, canContinue, isReturn, returnType);
}
void IfElseStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    Cond->Semantics(Offset);
    ThenStm->Semantics(Offset, canBreak, canContinue, isReturn, returnType);
    ElseStm->Semantics(Offset, canBreak, canContinue, isReturn, returnType);
}
void WhileStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    Cond->Semantics(Offset);
    Body->Semantics(Offset, 1, 1, isReturn, returnType);
}
void ForStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    SinExp->Semantics(Offset);
    Cond->Semantics(Offset);
    EndExp->Semantics(Offset);
    Body->Semantics(Offset, 1, 1, isReturn, returnType);
}
void CaseStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    Cond->Semantics(Offset);
    if(!IsConstValue(Cond))
        Errors::ErrorAdd(Line,Column,"case中不是常量");

    for(auto a:Body)
    {
        int Offset_S=Offset;      //前后并列语句可以使用同一片单元，所以取最大值，这里保存起始偏移量
        a->Semantics(Offset, 1, canContinue, isReturn, returnType);
        if (Offset>MaxVarSize) MaxVarSize=Offset;
        Offset=Offset_S;
    }
}
void SwitchStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    Exp->Semantics(Offset);
    for(auto a:Cases)
        a->Semantics(Offset, 1, canContinue, isReturn, returnType);
    for(auto a:Cases) 
    {
        int EqualNum=0;
        for(auto b:Cases)
        {
            if(((ConstAST*)(a->Cond))->ConstVal.constCHAR == ((ConstAST*)(b->Cond))->ConstVal.constCHAR &&
               ((ConstAST*)(a->Cond))->ConstVal.constFLOAT == ((ConstAST*)(b->Cond))->ConstVal.constFLOAT &&
               ((ConstAST*)(a->Cond))->ConstVal.constINT == ((ConstAST*)(b->Cond))->ConstVal.constINT)
                EqualNum++;
        }
        if(EqualNum > 1)
            Errors::ErrorAdd(Line,Column,"switch语句的key值相等");
    }

    for(auto a:Default)
    {
        int Offset_S=Offset;      //前后并列语句可以使用同一片单元，所以取最大值，这里保存起始偏移量
        a->Semantics(Offset, 1, canContinue, isReturn, returnType);
        if (Offset>MaxVarSize) MaxVarSize=Offset;
        Offset=Offset_S;
    }
}
void ReturnStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    if (Exp) Exp->Semantics(Offset);
    if ((returnType == T_VOID && Exp) || (returnType != T_VOID && !Exp) || 
        (returnType != T_VOID && Exp && returnType != Exp->Type))
        Errors::ErrorAdd(Line,Column,"函数返回值类型与函数定义的返回值类型不匹配");
    isReturn=1;
}
void BreakStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    if(canBreak == 0)
        Errors::ErrorAdd(Line,Column,"break语句不在循环语句或switch语句中");
}
void ContinueStmAST::Semantics(int &Offset, int canBreak, int canContinue, int &isReturn, BasicTypes returnType)
{
    if(canContinue == 0)
        Errors::ErrorAdd(Line,Column,"continue语句不在循环语句中");
}


/**************表达式显示******************************/
void VarAST::Semantics(int &Offset)
{
    if (VarRef=(VarSymbol *)SymbolStack.LocateNameGlobal(Name))
    {
        //如果是函数名，报错，
        if(VarRef->Kind=='F')
            Errors::ErrorAdd(Line,Column,"对函数名采用非函数调用形式访问 ") ;
        //简单变量则提取变量类型属性
        else 
            Type=VarRef->Type;
    }
    else Errors::ErrorAdd(Line,Column,"引用未定义的符号 "+Name) ;

}

void ConstAST::Semantics(int &Offset)
{
    //提取类型属性
}

void AssignAST::Semantics(int &Offset)
{
    LeftValExp->Semantics(Offset);
    if (!IsLeftValue(LeftValExp))
        Errors::ErrorAdd(Line,Column,"非左值表达式赋值");
    RightValExp->Semantics(Offset);
    if(LeftValExp->Type == T_VOID || RightValExp->Type == T_VOID)
        Errors::ErrorAdd(Line,Column,"弱类型语言里void类型也不允许赋值");
    Type=LeftValExp->Type;
}

void BinaryExprAST::Semantics(int &Offset)
{
    LeftExp->Semantics(Offset);
    RightExp->Semantics(Offset);
    if(LeftExp->Type == T_VOID || RightExp->Type == T_VOID)
        Errors::ErrorAdd(Line,Column,"弱类型语言里void类型也不允许计算");
    
    if(LeftExp->Type == T_FLOAT || RightExp->Type == T_FLOAT)
        Type=T_FLOAT;
    else if(LeftExp->Type == T_INT || RightExp->Type == T_INT)
        Type=T_INT;
    else if(LeftExp->Type == T_CHAR && RightExp->Type == T_CHAR)
        Type=T_CHAR;
    //根据左右值类型，判断是否能进行运算，并确定运算结果类型
}

void UnaryExprAST::Semantics(int &Offset)
{
    Exp->Semantics(Offset);
    if (!IsLeftValue(Exp))
        Errors::ErrorAdd(Line,Column,"非左值表达式自增、自减");
    Type=Exp->Type;
}

void FuncCallAST::Semantics(int &Offset)
{
    if (FuncRef=(FuncSymbol *)SymbolStack.LocateNameGlobal(Name))
    {
        if(FuncRef->Kind != 'F')
            Errors::ErrorAdd(Line,Column,"对非函数名采用函数调用形式 ");
        else if(FuncRef->ParamNum!=Params.size())
            Errors::ErrorAdd(Line,Column,"实参表达式个数和形参不一致 ");
        else {
            SymbolsInAScope *ParamPtr=FuncRef->ParamPtr;int i=0;
            Type=FuncRef->Type;
            for(auto a:Params)
            {
                a->Semantics(Offset);
                //检查实参表达式个数和形参数是否一致，类型是否一致
                if (Name!=string("write")) {
                    VarSymbol *Sym=(VarSymbol*)((ParamPtr->Symbols).at(i++));
                    if(Sym->Type != a->Type) {
                        Errors::ErrorAdd(Line,Column,"实参表达式类型和形参不一致 "); 
                        break;
                    }
                }   
            }            
        }
    }
    else Errors::ErrorAdd(Line,Column,"引用未定义的函数 "+Name);
}
