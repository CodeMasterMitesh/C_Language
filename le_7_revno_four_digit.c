#include <stdio.h>

int main() {

     int num,rev;
     printf("Enter a four digit number: ");
     scanf("%d",&num);

     rev = num % 10;  //1234 % 10 = 4
     printf("%d",rev); //print 4 
     num = num / 10; //1234 / 10 = 123

     rev = num % 10;  // 123 % 10 = 3
     printf("%d",rev); //print 3
     num = num / 10;// 123 / 10 = 12

     rev = num % 10; // 12 % 10 = 2
     printf("%d",rev); // print 2
     rev = num / 10; // 12 / 10 = 1
     printf("%d",rev); //print 1
    return 0;
}