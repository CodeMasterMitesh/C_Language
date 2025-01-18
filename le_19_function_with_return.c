#include <stdio.h>

int f1(int);

int f1(int a){
  return a = 10;
}

int main() {

  system("cls");

  int a = 15;
  int r;
  r = f1(a);
  printf("r = %d\n",r);
  printf("a = %d\n",a);
  // printf("%d",f1(10));
  

  return 0;
}
