int fibo (int a) { // compute the Fibonacci sequence recursively 
    if (a == 1 || a == 2)
        return 1;
    return fibo(a - 1)+fibo(a - 2);
}
int main () {
    /*
        cycling of /*****comput**ing*/
    int m=2, n, t;
    int i = 0;
    
    write(9%4);

    for(i = 1; i <= 10; i++)
        write(i);
    m=read();
    i = 1;
    while (i<=m) {
        if(i==3) {
            i++;
            continue;
        }
        n=fibo(i);
        write (n);
        i = i+1;
    }

    
    t = 0;
    for(i=1;i<=m;i++) {
        t=t+fibo(i);
    }
    write(t);

    return 0;
}
