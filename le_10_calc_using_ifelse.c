#include <stdio.h>
// calculator using if else
int main() {

    char oper;
    int num1, num2 , ans;
    float ans1;
    system("cls");
    printf("Enter Operator from List (+, -, *, /): ");
    scanf("%c",&oper);

    printf("Enter number number1 :");
    scanf("%d",&num1);

    printf("Enter number number2 :");
    scanf("%d",&num2);

    if(oper == '+'){
        ans = num1 + num2;
        printf("Addition of %d and %d is %d",num1,num2,ans); 
    }else if(oper == '-'){
        ans = num1 - num2;
        printf("Subtraction of %d and %d is %d",num1,num2,ans);
    }else if(oper == '*'){
        ans = num1 * num2;
        printf("Multiplication of %d and %d is %d",num1,num2,ans);
    }else if(oper == '/'){
        ans1 = (float)num1 / num2;
        printf("Division of %d and %d is %.2f",num1,num2,ans1);
    }else{ 
        printf("Invalid Operator");
     }

    return 0;
}