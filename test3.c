int main () {
    int i = 0;
    
    for(i = 1; i <= 10; i++) {
        if(i == 3) 
            continue;
        if(i == 5)
            break;
        write(i);
    }
    return 0;
}
