#include <stdio.h>
// enum is user define datatype

enum Months{
    Jan=1,Feb,March,April,May,Jun,July,Aug,Sep,Oct,Nov,Dec
};

int daysInMonth(int m1){

        switch (m1)
        {
        case Jan:return 31;break;
        case Feb:return 28;break;
        case March:return 31;break;
        case April:return 30;break;
        case May:return 31;break;
        case Jun:return 30;break;
        case July:return 31;break;
        case Aug:return 31;break;
        case Sep:return 30;break;
        case Oct:return 31;break;
        case Nov:return 30;break;
        case Dec:return 31;break;
        
        default:
        printf("Invalid Input");
            break;
        }
}

int main()
{
    system("cls");
    enum Months m1;
    int input;
    printf("Enter number in 1 to 12 :");
    scanf("%d",&input);
    
    int r = daysInMonth(input);
    printf("Days in Month of %d is %d\n",input,r);

    return 0;
}