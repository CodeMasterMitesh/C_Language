#include <stdio.h>

int main() {

    // increment and decrement operators

    // ++ increment operator  -> post increment and pre increment
    // -- decrement operator  -> post decrement and pre decrement

    int a = 10;
    //int b = a++; // post increment  // 10 + 1 = 11;
    // b++; 
    // b++;
    // b++;
    // printf("b : %d\n",b);
    // printf("a : %d\n",a);

    //int b = ++a; // pre increment  // 1 + 10 = 11;
    // printf("b : %d\n",b);
    // printf("a : %d\n",a);


    //int b = a--; // post decrement  10 - 1 = 9;
    // printf("b : %d\n",b); 
    // printf("a : %d\n",a);

    int b = a++; // pre decrement  1 - 10 = 9;
    ++b;
    b++;
    a++;
    printf("b : %d\n",b); 
    printf("a : %d\n",a);
    return 0;
}