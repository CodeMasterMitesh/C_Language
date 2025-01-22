#include <stdio.h>

int main() {
    system("cls");
    // int num[3][3] = 
    // { // 0 1 2
    //     {1,2,3},//0 
    //     {4,5,6},//1
    //     {7,8,9} //2
    // };
    int num[3][3];

   for (int i = 0; i < 3; i++)
   {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the 9 random number :");
            scanf("%d",&num[i][j]);
        }
   }
   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    
    // num[0][0];
    // num[0][1];
    // num[0][2];

    // 1 2 3


    return 0;
}