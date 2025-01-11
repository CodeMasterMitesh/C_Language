#include <stdio.h>
// rightangel pattern
int main() {
    system("cls");
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    //1) iteration -> // outerloop  i = 1 , (j = 5 , 0 >= 1 , 5--)
           // inner loop 1 iteration -> 
    //2) outer loop 2)  i = 2, (j = 5; 1 >= 2 ; 5--)
    // 3) outer loop 3) i = 3 (j = 5 ; 2 >= 3 ; 5--)
    // 4) outer loop 4) i = 4 (j = 5 ; 2 >= 4 ; 5--)
    // 4) outer loop 4) i = 4 (j = 5 ; 2 >= 4 ; 5--)
    // 5) outer loop 4) i = 5 (j = 5 ; 5 >= 5 ; 5--)
    
    // *****    
    // ****    
    // ***      
    // **     
    // *        
    return 0;
}