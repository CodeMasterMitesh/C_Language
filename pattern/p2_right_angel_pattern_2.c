#include <stdio.h>
// rightangel pattern
int main() {
    system("cls");
    char alp = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",alp);
            alp++;
        }
        printf("\n");
    }
    
    // A  ->  outer loop 1 -> inner loop 1
    // BC ->  outer loop 2 -> inner loop 2
    // DEF -> outer loop 3 -> inner loop 3
    // GHIJ -> outer loop 4 -> inner loop 4
    // KLMNO -> outer loop 5 -> inner loop 5
    return 0;
}