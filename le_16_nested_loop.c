#include <stdio.h>
// nested loops
int main() {

// outer loop
    for (int i = 1; i <= 5; i++)
    {
        // inner loop
        for (int j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    return 0;
}