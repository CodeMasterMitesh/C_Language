#include <stdio.h>
// even odd number find
int main() {
    // system("CLS");
    int num;
    printf("Enter Any Number :");
    scanf("%d",&num);
    
    if(num % 2 == 0){
        printf("This is Even Number");
    }else{
        printf("This is odd number");
    }

    return 0;
}