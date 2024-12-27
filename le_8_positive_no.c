#include <stdio.h>
// find positive
int main() {

    int num;
    printf("Enter Any Number :");
    scanf("%d",&num);
    // > 0  positive number 
    // nagative number 

    if(num > 0){
        printf("Number is Positive");
    }else{
        printf("Number is Not Positive");
    }

    return 0;
}