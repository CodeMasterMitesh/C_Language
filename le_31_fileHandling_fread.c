#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// fwrite function in file handling

typedef struct{
    char name[50];
    float book_price;
    int book_page;
}Book;
int main() {
    system("cls");
    Book b1;
    int a;

    FILE *fp;

    fp = fopen("book1.txt","rb");

    if(fp == NULL){
        printf("File Not Exist");
        exit(1);
    }

    while(fread(&b1,sizeof(b1),1,fp) > 0){
        printf("Book Name : %s\n",b1.name);
        printf("Book Price : %.2f\n",b1.book_price);
        printf("Book Page : %d\n",b1.book_page);
    }


    fclose(fp);
   
    return 0;
}

