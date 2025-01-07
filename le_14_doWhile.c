#include <stdio.h>

// do while
int main() {
    
    int n = 1;
    int table = 9;
    do{
        printf("%d * %d = %d\n",table,n,table*n);
        n++;
    }while(n<=10);


    return 0;
}