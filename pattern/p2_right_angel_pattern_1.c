#include <stdio.h>
// rightangel pattern
int main() {
    int k = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    
    // 1  ->  outer loop 1 -> inner loop 1
    // 23 ->  outer loop 2 -> inner loop 2
    // 456 -> outer loop 3 -> inner loop 3
    // 78910 -> outer loop 4 -> inner loop 4
    // 1112131415 -> outer loop 5 -> inner loop 5
    return 0;
}