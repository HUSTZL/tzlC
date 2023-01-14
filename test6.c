int a;
int test1 () {
    return ++a;
}
int test2 () {
    return ++a;
}
int main() {
    write(test1());
    write(test2());
    return 0;
}
