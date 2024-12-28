#include <stdio.h>
//
int main() {
    
    //students_percentage ->  
    // 80 to 100 Grade A, 60 to 79 B , 35 to 60  c , below 35 Fail 
    system("CLS");
    int per;
    printf("Enter Your Percentage :");
    scanf("%d",&per);

    if(per >= 80 && per <= 100){
        printf("Grade A\n");
    }else if(per >=  60 && per < 80){
         printf("Grade B\n");
    }else if(per >= 35 && per < 60){
        printf("Grade C\n");
    }else if(per < 35 && per > 0){
        printf("Fail\n");
    }else{
        printf("Invalid Input\n");
    }

    printf("End Program");
    return 0;
}