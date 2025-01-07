#include <stdio.h>
// loops
// while , do while , for loop
int main() {
    // while loops 
    // if condition true than and only than compiler go into while body
    // while(condition){
    //     // statments 
            // increment/decrement 
    // }

    int num = 1;

    while (num <= 10)
    {
       printf("%d => Good Morning\n",num);
       num++;
    }

    printf("End Program");
// loop 1  num =  1 // 1 <= 10  // num = 2
// loop 2 num = 2 // 2 <= 10 //   num = 3 
// loop 3 num = 3 // 3 <= 10 //   num = 4
// loop 4 num = 4 // 4 <= 10 //   num = 5
// loop 5 num = 5 // 5 <= 10 //   num = 6
// loop 6 num = 6 // 6 <= 10 //   num = 7
// loop 7 num = 7 // 7 <= 10 //   num = 8 
// loop 8 num = 8 // 8 <= 10 //   num = 9
// loop 9 num = 9 // 9 <= 10 //   num = 10
// loop 10 num = 10 // 10 <= 10 //   num = 11
    return 0;
}