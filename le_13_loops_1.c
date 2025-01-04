#include <stdio.h>
// create table using loops
int main() {
    system("cls");
    int x = 1;
    int n = 10;
    int table = 9;

    printf("~~~~~~~~~~Table of %d~~~~~~~~~~\n",table);
    while(x <= n){
        // block of code
        printf("%d * %d = %d\n",table,x,table * x);
        x++;
    }
     printf("~~~~~~~~~~Table End~~~~~~~~~~\n");
//    9 * 1 = 9 
//    9 * 2 = 18

    return 0;
}