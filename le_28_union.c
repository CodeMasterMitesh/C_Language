#include <stdio.h>
// union is user define datatype

union Example
{
    int a;
    int c;
    float b;
};

struct Example1{
    int a;
    int b;
    int c;
};

int main() {
    system("cls");
    union Example e1;
    e1.a = 10;
    e1.c = 30;
    e1.b = 20.22;

    printf("Size of %d\n",sizeof(e1));
    printf("a = %d\n",e1.a);
    printf("b = %.2f\n",e1.b);
    printf("c = %d\n ",e1.c);

    struct Example1 s1;
    s1.a = 10;
    s1.b = 20;
    s1.c = 30;
    printf("Size of %d\n",sizeof(s1)); 
    printf("Structure Data\n");
    printf("a = %d\n",s1.a);
    printf("b = %d\n",s1.b);
    printf("c = %d",s1.c);

    return 0;
}