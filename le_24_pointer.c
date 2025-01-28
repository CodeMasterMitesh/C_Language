#include <stdio.h>
//pointer is a variable that stores the memory address of another variable
int main() {
    system("cls");
     int a = 10;
     int *p; //pointer variable declaration
     p = &a; //storing the address of a in p

     int **p1 = &p; //pointer to pointer variable declaration

     int ***p2 = &p1; //pointer to pointer to pointer variable declaration

     printf("Value of a: %d\n", a);
     printf("Value of a using pointer: %d\n", *p);
     printf("Address of a: %d\n", p);
     printf("Address of p: %d\n", p1);
     printf("Value of a using pointer of pointer: %d\n", **p1);
     printf("Address of p1: %d\n", p2);
     printf("Value of a using pointer of pointer of pointer: %d\n", ***p2);
    return 0;
}