int t;
int fibo (int a) { // compute the Fibonacci sequence recursively 
    if (a == 1 || a == 2)
        return 1;
    return fibo(a - 1)+fibo(a - 2);
}
int main () {
    int t = 7;

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