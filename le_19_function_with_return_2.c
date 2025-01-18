#include <stdio.h>

int sum(int,int);

int f1(int x,int y){
  printf("value of x= %d and y = %d\n",x,y);
  return x + y;
}

int main() {

  system("cls");

  int a = 15;
  int b = 16;
  
  int c = f1(a,b);
  
  printf("sum of a and b is : %d",c);
  return 0;
}
