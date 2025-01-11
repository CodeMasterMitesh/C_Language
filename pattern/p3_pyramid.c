#include <stdio.h>
// rightangel pattern
int main() {
    system("cls");
    int n = 5;
    for (int i = 1; i <= n; i++)
    {  
        for(int k = i; k < n; k++){
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

//     *        //outer loop 1 -> inner 1 iteration  and 4 space
//    ***       //outer loop 2 -> inner 3 iteration  and 3 space 
//   *****      //outer loop 3 -> inner 5 iteration  and 2 space
//  *******     //outer loop 4 -> inner 7 iteration  and 1 space
// *********    //outer loop 5 -> inner 9 iteration  and 0 space


//  *********
//   *******
//    *****
//     ***
//      *


//     *        
//    ***       
//   *****      
//  *******     
// *********
//  *******
//   *****
//    ***
//     *

// 1 2 3 4 5
// 6 A B C 7
// 8 D E F 9
// 10 G H I 11
// 12 13 14 15



    return 0;
}