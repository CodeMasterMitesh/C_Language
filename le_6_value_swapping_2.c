#include <stdio.h>
// value swapping
int main() {
    
    int a,b;

    a = 45;
    b = 33;

    // before swapping
    printf("a = %d and b = %d\n",a,b);
    // + -
    // * /
    a += b; // 78 a = a + b;
    printf("a = %d\n",a);
    b = a - b; // 78 - 33 = 45
    printf("b = %d\n",b);
    a -= b;  //a = a - b; // 78 - 45 = 33
    printf("a = %d\n",a);
    // after swapping
   printf("a = %d and b = %d\n",a,b);

    return 0;
}