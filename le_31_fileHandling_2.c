#include <stdio.h>
#include <string.h>
// fgetc,fgets
int main() {
    system("cls");
    FILE *fp;
    
    // char name[100] = "My Name is Mitesh Prajapati";
    char name[100];

    fp = fopen("students.txt","r");

    // fputs(name,fp);
    while (fgets(name,99,fp) != NULL)
    {
        printf("%s",name);
    }


    fclose(fp);
   
    return 0;
}