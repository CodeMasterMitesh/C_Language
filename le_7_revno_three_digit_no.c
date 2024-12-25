#include <stdio.h>

int main() {

     int num,rev;
     printf("Enter a three digit number: ");
     scanf("%d",&num);
    
     rev = num % 10; // 123 % 10 = 3
     printf("%d",rev); // 3
     num = num / 10; // 123 / 10 = 12
     rev = num % 10; // 12 % 10 = 2
     printf("%d",rev); // 2
     rev = num / 10; // 12 / 10 = 1
     printf("%d",rev); // 1
    return 0;
}