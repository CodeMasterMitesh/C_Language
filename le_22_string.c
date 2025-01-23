#include <stdio.h>
#include <string.h>
// string : sequence of characters and terminated by null character '\0'.
// string is a array of characters.
int main() {
    system("cls");
    // char name[7] = {'M','I','T','E','S','H'};
    // char name[7] ="Mitesh";
    char name[20];
    printf("Enter your name: ");
    // scanf("%s",name);
    gets(name);
    puts(name);
    //printf("%s",name);

    return 0;
}