#include <stdio.h>

int main() {
    system("cls");
    int a[5],*p,i;
    p = &a[0];

    for (i = 0; i < 5; i++)
    {
        printf("Enter five value :");
        scanf("%d", p+i);
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("%d\n",*(p+i));
    }
    
    // int abc = 10;
    // int *q = &abc;
    // printf("\n%d",*q);

    return 0;
}