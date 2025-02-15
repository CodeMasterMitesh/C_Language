#include <stdio.h>
#include <string.h>
// fwrite function in file handling

typedef struct{
    char name[50];
    float book_price;
    int book_page;
}Book;
int main() {
    system("cls");
    Book b1;

    printf("Enter Book Name :");
    gets(b1.name);
    printf("Enter Book Price :");
    scanf("%f",&b1.book_price);
    printf("Enter No of Book Page :");
    scanf("%d",&b1.book_page);
 
    FILE *fp;

    fp = fopen("book1.txt","ab");

    fwrite(&b1,sizeof(b1),1,fp);

    fclose(fp);
   
    return 0;
}

