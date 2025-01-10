#include <stdio.h>
// rightangel pattern
int main() {
    system("cls");
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    // *****  ->  outer loop 1 -> inner loop 5   j - i = 5
    // **** ->  outer loop 2 -> inner loop 4     5 - 1 = 4
    // *** -> outer loop 3 -> inner loop 3       5 - 2 = 3
    // ** -> outer loop 4 -> inner loop 2        5 - 3 = 2
    // * -> outer loop 5 -> inner loop 1         5 - 4 = 1

    // 12345
    // 1234
    // 123
    // 12
    // 1

    // ABCDE
    // ABCD
    // ABC 
    // AB
    // A

    // 1514131211
    // 10987
    // 654
    // 32
    // 1

    // 55555
    // 4444
    // 333
    // 22
    // 1

    // 1
    // 22
    // 333
    // 4444
    // 55555
    return 0;
}