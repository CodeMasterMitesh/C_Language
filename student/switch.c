#include <stdio.h>

int main()
{

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
    case 8:
        printf("Grade A\n");
        break;
    case 7:
    case 6:
        printf("Grade B\n");
        break;
    case 5:
    case 4:
        printf("Grade C\n");
        break;
    default:
        printf("Grade F\n");
        break;
    }
    return 0;
}