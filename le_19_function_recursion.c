#include <stdio.h>

// recursion means function call itself again and again
// factorial means 5
// 1 * 2 * 3 * 4 * 5 ....* n-1 * n 
 // (n-1) * n
int factorial(int);

int factorial(int n){
  if(n == 1 || n == 0){
    return 1;
  }
  return factorial(n-1) * n;
}
// 1 * 2 * 3 * (4 * 5)
int main() {

  system("cls");
  int a;
  printf("Enter Value 1 to 10 :");
  scanf("%d",&a);
  int r = factorial(a);
  printf("factorial of %d is %d",a,r);
  return 0;
}
