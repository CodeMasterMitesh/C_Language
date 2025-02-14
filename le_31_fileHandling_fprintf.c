#include <stdio.h>
#include <string.h>
// fgetc,fgets
int main() {
    system("cls");
    FILE *fp;

    int x,y,z;

    printf("Enter Value for x and y :");
    scanf("%d",&x);
    scanf("%d",&y);

    z = x + y;

    fp = fopen("sum.txt","w+");

    if(fp == NULL){
        printf("File Not Exist");
        exit(1);
    }

    fprintf(fp,"Sum of x = %d and y = %d is %d",x,y,z);
    // fprintf(fp,"My Name Is Mitesh.");
    

    fclose(fp);
   
    return 0;
}

