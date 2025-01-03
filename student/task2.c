#include <stdio.h>
int main () {

    system ("CLR");
    int num;
    printf("enter any number");
    scanf("%d", &num);
    num > 0 ? printf("positive number"):printf("negative number");
    return 0;
}