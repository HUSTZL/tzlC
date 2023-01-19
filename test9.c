int main()
{
    int a;
    int b[3][4];
    int c = 1;
    int d = 0;
    
    c = -c;
    write(c);
    b[2][2] = 114514;
    write(b[2][2]);
    b[1][2] = -b[2][2];
    write(b[1][2]);
    write(114514+1832224);
    b[2][c] = 0;
    write(b[2][c]);
    b[2][3] = ++b[2][2];
    write(b[2][2]);
    write(b[2][3]);

    d = !(c && d || b[2][2]);
    write(d);
    return 0;
}