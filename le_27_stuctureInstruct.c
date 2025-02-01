#include <stdio.h>
// typedef is a keyword
// typedef float point;

typedef struct{
    int h,m,s;
}Time;

typedef struct{
    // int no;
    char no[15];
    Time t,t1;
}Car;
int main() {
    system("cls");
    Car c1;
    printf("Enter Car No :");
    // scanf("%d",&c1.no);
    gets(c1.no);
    printf("Enter InTime in Hour Minutes and second :");
    scanf("%d%d%d",&c1.t.h,&c1.t.m,&c1.t.s);
    printf("Enter OutTime in Hour Minutes and second :");
    scanf("%d%d%d",&c1.t1.h,&c1.t1.m,&c1.t1.s);

    printf("************************PRINT************************\n");
    printf("CAR NO\t\tIN TIME\t\tOUT TIME\n");
    printf("******************************************************\n");
    printf("%s\t%d:%d:%d\t\t%d:%d:%d\n",c1.no,c1.t.h,c1.t.m,c1.t.s,c1.t1.h,c1.t1.m,c1.t1.s);
    printf("******************************************************\n");
    printf("~~~~~~~~~~~~~~~~~~~~~FILE END~~~~~~~~~~~~~~~~~~~~~~~~\n");
    // point x = 25.25;

    // float y = 15.25;

    // printf("%.2f\n",x);
    // printf("%.2f\n",y);

    return 0;
}