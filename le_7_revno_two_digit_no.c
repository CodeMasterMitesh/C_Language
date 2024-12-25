#include <stdio.h>

int main() {

     int num,rev;
     printf("Enter the any two digit number: ");
     scanf("%d",&num);
    // if i modules any value by 10 then it will give the last digit of that number
     rev = num % 10; // 2
     printf("%d",rev);
     // if i divide any value by 10 then it will give the first digit of that number
     rev = num / 10; // 1
     printf("%d",rev);
    return 0;
}