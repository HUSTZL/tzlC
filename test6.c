int test1 (int a);
int test2 (int a);
int main() {
    write(test1(3));
    write(test2(4));
    return 0;
}
int test1 (int a) {
    return test2(a)+1;
}
int test2 (int a) {
    return a+5;
}


