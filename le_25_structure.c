#include <stdio.h>
#include <string.h>
// two types of data types
// 1. primitive data types -> int, float, char, double

// 2. user defined data types  -> structure, union, enum
// structure is user defined data type
// structure is collection of different primitive data types

// struct keword is used to define the structure
// union keyword is used to define the union
// enum keyword is used to define the  enumuration

struct Book{
    int book_id;
    char book_name[20];
    float book_price;
};

int main() {
   system("cls");
   struct Book b1 = {1,"James Bond",500.50};
   struct Book b2 = {2,"Harry Potter",600.50};
   struct Book b3;
   
   printf("Book id is %d\n",b1.book_id);
   printf("Book name is %s\n",b1.book_name);
   printf("Book price is %.2f\n",b1.book_price);

   printf("Book id is %d\n",b2.book_id);
   printf("Book name is %s\n",b2.book_name);
   printf("Book price is %.2f\n",b2.book_price);

   printf("Enter the book name :");
   gets(b3.book_name);

   printf("Enter the book id :");
   scanf("%d",&b3.book_id);

   printf("Enter the book price :");
   scanf("%f",&b3.book_price);

   printf("Book id is %d\n",b3.book_id);
   printf("Book name is %s\n",b3.book_name);
   printf("Book price is %.2f\n",b3.book_price);


    return 0;
}