#include <stdio.h>
// switch case
int main() {
    
    int month;
    printf("Enter Month Number 1 to 12: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("January Month has 31 Days\n");
        break;
    case 2:
        printf("Feb Month has 28 Days\n");
        break;
    case 3:
        printf("March Month has 31 Days\n");
        break;
    case 4:
        printf("April Month has 30 Days\n");
        break;
    case 5:
        printf("May Month has 31 Days\n");
        break;
    case 6:
        printf("Jun Month has 30 Days\n");
        break;
    case 7:
        printf("July Month has 31 Days\n");
        break;
    case 8:
        printf("Aug Month has 31 Days\n");
        break;
    case 9:
        printf("Sep Month has 30 Days\n");
        break;
    case 10:
        printf("Oct Month has 31 Days\n");
        break;
    case 11:
        printf("Nov Month has 30 Days\n");
        break;
    case 12:
        printf("Dec Month has 31 Days\n");
        break;
    default:
        printf("Invalid Month Number\n");
        break;
    }

    return 0;
}