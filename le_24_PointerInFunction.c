#include <stdio.h>
//pointer is a variable that stores the memory address of another variable
void swap(int *a, int *b) {
    printf("before swap run\n");
    int c;
    c = *a;
    *a = *b;
    *b = c;
    // printf("a = %d and b = %d\n", *a,*b);
    printf("after swap run\n");
}
int main() {
    system("cls");
    int a,b;
    printf("Enter the value of a,b: ");
    scanf("%d %d", &a, &b);
    printf("a = %d and b = %d\n", a,b);

    // swap(a,b);  // function call by value
    swap(&a,&b);  // function call by refrence

    printf("a = %d and b = %d\n", a,b);
    return 0;
}