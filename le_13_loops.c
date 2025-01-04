#include <stdio.h>
// loops 

// while 
// do while 
// for 
int main() {
    system("cls");
    // while loop
    int x = 0;
    // while loop when condition is true then it will execute the block of code
    // when condition is false then it will not execute the block of code
    while(x < 5){
        printf("%d -> Welcome To Patel Web Solution\n",x+1);
        x++;
    }

    printf("Out of while loop\n");

    return 0;
}