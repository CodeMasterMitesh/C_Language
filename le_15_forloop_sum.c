#include <stdio.h>
// forloop
int main() {
   
    // for(initializer;condition;increment/decrement){
    //     statment 1;
    // }

    // cycle of for loop 

    // step 1 -> initializer
    // step 2 -> condition check 
    // step 3 -> execution 
    // step 4 -> increment/decrement
    // step 5 -> again check condition
    
    int sum = 0;

    for(int n=1;n<=10;n++){
        sum+=n; // sum = sum+n
    }
    printf("sum of = %d\n",sum);
  
//    sum =0 + 1 // sum 1
    //   sum = 1 + 2 // 3
        //  sum  = 3 + 3 6
    return 0;
}