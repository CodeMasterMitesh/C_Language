#include <stdio.h>
int main(){
    int  num;
    printf("enter any number:");
    scanf("%d",&num);
    num % 2 == 0  ? printf("even number"): printf("odd number");
    return 0;
}
