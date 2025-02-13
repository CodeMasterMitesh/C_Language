#include <stdio.h>
#include <string.h>
// fgetc,fgets
int main() {
    // system("cls");
    FILE *fp;
    
    char ch[150];

   fp = fopen("file.txt","r");
// fgetc
//    ch = fgetc(fp);
//    printf("%c",ch);

//    while (ch != EOF)
//    {
//     printf("%c",ch);
//     ch = fgetc(fp);
//    }
// fgets

// fgets(ch,17,fp);

// while (fgets(ch,149,fp) != NULL)
// {
//     printf("%s",ch);
// }

fputs(ch,fp);

fclose(fp);
   
    return 0;
}