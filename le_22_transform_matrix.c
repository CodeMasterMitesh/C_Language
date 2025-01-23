#include <stdio.h>
// transform matrix
int main() {
system("cls");
int a[2][2], b[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the 4 value of Array: ");
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("The Matrix is array a: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("The Transforme Matrix is array b: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            b[i][j] = a[j][i];
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// int a[10] = {1,2,3,4,5,6,7,8,9,10};
// find loweset value in array
// find highest value in array
