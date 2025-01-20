#include <stdio.h>

int calc(int,int,char);

int calc(int x,int y ,char opr){
    if(opr == '+'){
        return x + y;
    }else if(opr == '-'){
        return x - y;
    }else if(opr == '*'){
        return x * y;
    }else if(opr == '/'){
        return x / y;
    }
}

int main() {

    int num1,num2;
    char opr;
    printf("Choose operation (+,-,*,/) :");
    scanf("%c",&opr);
    printf("Enter Num1 and num2 :");
    scanf("%d%d",&num1,&num2);

    int r = calc(num1,num2,opr);
    printf("Ans is = %d",r);

    return 0;
}