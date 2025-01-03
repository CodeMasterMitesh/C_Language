#include <stdio.h>
// ternary operators
int main() {
    
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    age >= 18 ? printf("You Can Vote\n") : printf("You Can't Vote\n");
    
    return 0;
}