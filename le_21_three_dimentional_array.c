#include <stdio.h>

int main() {
    system("cls");
    int num[2][2][2] = {
        {//0
            //0 1
            {1,2},//0
            {3,4}//1
        },
        {//1
            {5,6},//0
            {7,8}//1
        }
    };

// num[0][0][0];
//    for (int i = 0; i < 3; i++)
//    {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter the 9 random number :");
//             scanf("%d",&num[i][j]);
//         }
//    }
   
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ",num[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
   
    return 0;
}