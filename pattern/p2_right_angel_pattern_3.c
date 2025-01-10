#include <stdio.h>
// rightangel pattern
int main() {
    system("cls");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    // 1  ->  outer loop 1 -> inner loop 1
    // 12 ->  outer loop 2 -> inner loop 2
    // 123 -> outer loop 3 -> inner loop 3
    // 1234 -> outer loop 4 -> inner loop 4
    // 12345 -> outer loop 5 -> inner loop 5
    return 0;
}