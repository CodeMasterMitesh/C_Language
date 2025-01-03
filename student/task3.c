#include <stdio.h>
  int main(){

      char oper;
      int num1, num2,ans;
      float ans1;
      printf("enter oprator from list (+,-,*,/):");
      scanf("%c",&oper);

      printf("enter first number");
      scanf("%d",&num1);

      printf("enter second number");
      scanf("%d",&num2);

     switch (oper)
     {
        case '+':
        ans = num1 + num2;
        printf("additin of %d and %d is %d",num1,num2,ans);
        break;

        case '-':
        ans = num1 - num2;
        printf("substration of %d and %d is %d",num1,num2,ans);
        break;

        case '*':
        ans = num1 * num2;
        printf("multipicatin of %d and %d is %d",num1,num2,ans);
        break;

        case '/':
        ans = num1 /  num2;
        printf("division of %d and %d is %.2f",num1,num2,ans1);
        break;
          

     default:
     printf("invalid operator");
        break;
     }

    return 0;
}