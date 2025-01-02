#include <stdio.h>
// leap year program using nested if else

// 2024 % 4 == 0 true
//  2024 %100 == true
//  2024 %400 == 0 leap year
int main() {

    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    if(year % 4 == 0){ 
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("%d is leap year\n",year);
            }else{
                printf("%d is not leap year\n",year);
            }
        }else{
            printf("%d is leap year\n",year);
        }
    }else{
        printf("%d is not leap year\n",year);
    }



    return 0;
}