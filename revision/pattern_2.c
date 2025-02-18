#include <stdio.h>
// pattern 2  -> right angel pattern
// *  -> 1 outer loop print 1 star in inner loop
// ** -> 2 outer loop print 2 star in inner loop
// *** -> 3 outer loop print 3 star in inner loop
// **** -> 4 outer loop print 4 star in inner loop
// ***** -> 5 outer loop print 5 star in inner loop
int main() {

    system("cls");
    char alp = 'A';
    printf("Pattern 1\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    printf("Pattern 2\n");
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    for (int i = 1; i <= 5; i++)
    {
        alp = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c",alp++);
        }
        
        printf("\n");
    }

    printf("Pattern 3\n");
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
    alp = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c",alp);
        }
        alp++;
        
        printf("\n");
    }
    return 0;
}