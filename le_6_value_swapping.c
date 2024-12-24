#include <stdio.h>
// value swapping
int main() {
    
    int a,b,c;

    a = 10;
    b = 20;
    
    // before swapping
    printf("a = %d and b = %d\n",a,b);

    c = a; // 10
    a = b; // 20
    b = c; // 10

    // after swapping
    printf("a = %d and b = %d\n",a,b);

    return 0;
}