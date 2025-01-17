#include <stdio.h>
// function with parameters
// prototype 
void sum(int ,int);  // parameters variable which is receive actual value

// function define 
void sum(int x,int y){
    int z = x + y;
    printf("Sum of Two valus is %d\n",z);
}


int main() {

  system("cls");
  int a = 10;
  int b = 20;

  sum(a,b);
  // int c = a + b;

  // printf("Sum of a and b is %d\n",c);

  int x = 12;
  int y = 15;
  sum(x,y);

  sum(50,45);  // argument is always actual value 
  // int z = x + y;

  // printf("Sum of x and y is %d\n",z);
  sum(35,5);
  return 0;
}
