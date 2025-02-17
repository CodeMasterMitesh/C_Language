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

    fp=fopen("poojaDetails.txt","w");

    for (int i = 0; i < strlen(text); i++)
    {
        fputc(text[i],fp);
    }

    fclose(fp);
    

    return 0;
}