#include <stdio.h>
#include <string.h>

struct Book{
    int book_id;
    char book_name[20];
    int page;
    float price;
};

struct Book input(){
    struct Book e;
    printf("Enter value for book id,book_name,page,price :");
    scanf("%d %s %d %f",&e.book_id,e.book_name,&e.page,&e.price);
    return e;
}

void displayData(struct Book e){
    printf("Book id is %d\n",e.book_id);
    printf("Book name is %s\n",e.book_name);
    printf("Book page is %d\n",e.page);
    printf("Book price is %.2f\n",e.price);
}

int main() {
   system("cls");
   
    struct Book b1,b2,b3;

    // b1.book_id = 1;
    // strcpy(b1.book_name,"James Bond");
    // b1.page = 500;
    // b1.price = 500.50;
    b1 = input();
    displayData(b1);

    b2 = input();
    displayData(b2);

    b3 = input();
    displayData(b3);
    return 0;
}

