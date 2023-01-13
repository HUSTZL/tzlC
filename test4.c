int a, b, c;
int fibo (int a) { // compute the Fibonacci sequence recursively 
    if (a == 1 || a == 2)
        return 1;
    return fibo(a - 1)+fibo(a - 2);
}
int main () {
    fibo(1.0);
}