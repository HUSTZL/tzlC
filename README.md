# houC

```bison
program: ExtDefList		

ExtDefList:
          | ExtDef ExtDefList
          
ExtDef:     Specifier ExtDecList SEMI
          | Specifier ID LP ParamList RP CompSt
          | Specifier ID LP ParamList RP SEMI
          
Specifier:  TYPE

ExtDecList: VarDec
          | VarDec COMMA ExtDecList

VarDec:     ID   
          | VarDec LB INT RB

ParamList:
          | ParamDec  
          | ParamList COMMA ParamDec
          
ParamDec:   Specifier VarDec

CompSt:     LC DefList StmList RC

StmList:
          | Stmt StmList

DefList: 
          | Def DefList

Def:   		Specifier DecList SEMI 

DecList:    Dec
          | Dec COMMA DecList
          
Dec:  		VarDec
       	  | VarDec ASSIGN Exp
       	  | VarDec ASSIGN LC ArrExp RC

ArrExp: 	Exp
       	  |LC ArrExp RC
          |ArrExp COMMA ArrExp

Stmt:   	Exp SEMI
      	  | CompSt
      	  | RETURN Exp SEMI
      	  | RETURN SEMI
      	  | IF LP Exp RP Stmt %prec LOWER_THEN_ELSE
      	  | IF LP Exp RP Stmt ELSE Stmt
      	  | WHILE LP Exp RP Stmt 
      	  | error SEMI

Exp:    	Exp ASSIGN Exp
      	  | Exp PLUS Exp 
       	  | Exp MINUS Exp
       	  | Exp STAR Exp
       	  | Exp DIV Exp 
       	  | LP Exp RP
       	  | MINUS Exp %prec UMINUS  
       	  | PLUS Exp %prec UPLUS

       	  | Exp AND Exp   
       	  | Exp OR Exp    
       	  | NOT Exp

       	  | Exp GT Exp	
       	  | Exp GE Exp 	
       	  | Exp LT Exp 	
       	  | Exp LE Exp 	
       	  | Exp NE Exp 
       	  | Exp EQ Exp


       	  | DPLUS Exp


       	  | ID LP Args RP
       	  | ID            	
       	  | INT           	
       	  | FLOAT       
       	  
Args:  
       	  |  Exp 
       	  |	 Args COMMA  Exp
```



```
ProgAST*                 program;
vector <ExtDefAST*> 	 ExtDefList;  	    //外部定义（外部变量、函数）列表
ExtDefAST* 				 ExtDef;
vector <VarDecAST*>  	 ExtDecList;        //外部变量列表（目前后续只考虑是标识符，可扩展为数组）
TypeAST*				 Specifier;
VarDecAST* 				 VarDec;
CompStmAST*				 CompSt;
vector <ParamAST*>  	 ParamList;         //形参列表
ParamAST* 				 ParamDec;
vector <StmAST*>   		 StmList;
StmAST* 				 Stmt;
vector <DefAST*>   		 DefList;
DefAST* 				 Def;
vector <VarDecAST*> 	 DecList;
VarDecAST* 				 Dec;
ExpAST* 				 Exp;
vector <ExpAST*>    	 Args;       		//实参列表
```



![AST](AST.png)



```
class AST ProgAST ExtDefAST TypeAST VarDecAST CompStmAST ParamAST StmAST DefAST VarDecAST ExpAST
```



```
class Symbol VarSymbol FuncSymbol SymbolsInAScope SymbolStackDef
```



```
class Opn//变量或函数表示
class IRCode//四元式结构
```



```
extern map <int,string> SymbolMap;
extern map <int,int>    TypeWidth;
```



```
typedef struct { int Line,Column;  string ErrMsg; }Error;
class Errors //用来记录语法、语义错误
```



加入

**行注释与块注释** √

**自增自减** √

**for循环** √

**根据函数返回值确定转移方向** √

**break**

**continue语句**

**Switch语句**

**数组**

**静态分析中的错误处理**