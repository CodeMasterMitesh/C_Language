#include<stdio.h>
// scanf function is used to take input from the user
int main(){

    float a,b,c;
    
    printf("Enter Value for a: ");
    scanf("%f",&a);

    printf("Enter Value for b: ");
    scanf("%f",&b);

    c = a * b;

    printf("Sum of %.2f and %.2f is %.2f\n",a,b,c);

    return 0;
}