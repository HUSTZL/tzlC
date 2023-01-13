int a, b, c;
int fibo (int a) { // compute the Fibonacci sequence recursively 
    if (a == 1 || a == 2)
        return 1;
    return fibo(a - 1)+fibo(a - 2);
}
int main () {
    /*
        cycling of /*****comput**ing*/
    int m, n, i, t;
    m=read();
    i = 1;
    while (i<=m) {
        n=fibo(i);
        write (n);
        i = i+1;
    }


    t = 0;
    for(i=1;i<=m;i++) {
        t=t+fibo(i);
    }
    write(t);

    if(3) {
        write(3);
    }
    else {
        write(0);
    }

    if(t) {
        write(t);
    }
    else {
        write(0);
    }

    if(t=0) {
        write(1);
    }
    else {
        write(0);
    }

    if(t++) {
        write(1);
    }
    else {
        write(0);
    }

    if(fibo(3)) {
        write(fibo(3));
    }
    else {
        write(0);
    }
    return 1;
}
