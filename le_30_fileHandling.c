#include <stdio.h>
#include <string.h>
// hello world
int main() {
    system("cls");
    FILE *fp;
    char text[100];

    printf("Enter Your Name :");
    // scanf("%s",text);
    gets(text);

    fp=fopen("file.txt","a");

    for (int i = 0; i < strlen(text); i++)
    {
        fputc(text[i],fp);
    }

    fclose(fp);
    

    return 0;
}