#include <stdio.h>

int main() {

     int num = 1234,rev;
     printf("Enter a four digit number: ");
     scanf("%d",&num);

     rev = num % 10; // 1234 % 10 = 4
     printf("%d",rev);
     
     num = num / 10; // 1234 / 10 = 123
     rev = num % 10; // 123 % 10 = 3
     printf("%d",rev);

     num = num / 10; // 123 / 10 = 12
     rev = num % 10; // 12 % 10 = 2
     printf("%d",rev);
     rev = num / 10; // ans = 1
     printf("%d",rev);
    return 0;
}