#include <stdio.h>
// forloop
int main() {
   
    int sum = 0;
    // 1 + 3 + 5 + 7 + 9 = 25

    for(int n=1;n<=10;n+=2){
        sum += n;
    }
    printf("sum of odd number is :%d\n",sum);
    // sum = sum + n;
    //     =  0  + 1 // sum 1
    //     = 1 + 3 //  sum 4
    //     = 4 + 5 //  sum 9
    //     = 9 + 7 // 16
    // sum = 16 + 9 // 25
    return 0;
}