#include <stdio.h>
// pattern 1

int main() {

    system("cls");
    char alp = 'A';
    // *****
    // *****
    // *****
    // *****
    // *****
    
// outer loop 1 iteration start same time inner loop 5 iteration
// outer loop 2 iteration start same time inner loop 5 iteration
// outer loop 3 iteration start same time inner loop 5 iteration
// outer loop 4 iteration start same time inner loop 5 iteration
// outer loop 5 iteration start same time inner loop 5 iteration
    for (int i = 1; i <= 5; i++)
    {
       for (int j = 1; j <= 5; j++)
       {
            printf("*");
       }
       printf("\n");
       
    }
    printf("Pattern 2\n");
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%c ",alp);
            alp++;
        }
        printf("\n");
        
    }

    // AAAAA
    // BBBBB
    // CCCCC
    // DDDDD
    // EEEEE
    printf("Pattern 3\n");
    alp = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%c ",alp);
        }
        alp++;
        printf("\n");
    }

    printf("Pattern 4\n");
    printf("\n");
    // ABCDE
    // ABCDE
    // ABCDE
    // ABCDE
    // ABCDE
    for (int i = 1; i <= 5; i++)
    {
        alp = 'A';
        for (int j = 1; j <= 5; j++)
        {
            printf("%c ",alp);
            alp++;
        }
        printf("\n");
    }
    printf("End Program");
    
    return 0;
}