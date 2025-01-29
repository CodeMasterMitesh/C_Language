#include <stdio.h>
#include <string.h>
int main() {
    system("cls");
    char a[20],*p;
    int i;
    p = a;
    // p = &a[0];

    printf("Enter your name :");
    gets(p);
    // for (i = 0; i < 20; i++)
    // {
    //     scanf("%c", p+i);
    // }
    //mitesh
    // for (i = 0; *(p+i) != '\0'; i++)
    // {
    //     printf("%c",*(p+i));
    // }

    // for (i = 0; i < strlen(p); i++)
    // {
    //     printf("%c",*(p+i));
    // }
    puts(p);
  
    return 0;
}