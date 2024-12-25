#include<stdio.h>
// scanf function is used to take input from the user
int main(){

    int a,b,c;
    
    printf("Enter Value for a: ");
    scanf("%d",&a);

    printf("Enter Value for b: ");
    scanf("%d",&b);

    c = a + b;

    printf("Sum of %d and %d is %d\n",a,b,c);

    return 0;
}