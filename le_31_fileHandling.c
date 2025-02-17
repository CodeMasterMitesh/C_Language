#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// fgetc,fgets
int main() {
    system("cls");
    FILE *fp;
    
    char ch[250];
    // char ch;

   fp = fopen("poojaDetails.txt","r");

   if(fp == NULL)
   {
    printf("File Not Exist");
    exit(1);
   }
// fgetc
//    ch = fgetc(fp);
//    printf("%c",ch);

//    while (ch != EOF)
//    {
//     printf("%c",ch);
//     ch = fgetc(fp);
//    }
// fgets
// int d = sizeof(*fp);
// printf("%d",d);
fgets(ch,250,fp);
printf("%s",ch);
// puts(ch);
// while (fgets(ch,sizeof(fp),fp) != NULL)
// {
// }

// fputs(ch,fp);

fclose(fp);
   
    return 0;
}