#include <stdio.h>
// forloop
int main() {
   
    // for(initializer;condition;increment/decrement){
    //     statment 1;
    // }
    
    int sum = 0;

    for(int n=0;n<=10;n+=2){
        sum+=n;
    }
    printf("%d\n",sum);
    return 0;
}