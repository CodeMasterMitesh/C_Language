// Exponential and Logarithmic Functions
// pow(x, y);
// sqrt();
// ceil();
// floor();
// fmod(x, y)
// fabs(6.99);
// hypot(4, 4);square root of sum of squares
// cube root cbrt(3);

#include <stdio.h>
#include<math.h>
int main() {
    system("cls");
    double x = 5;
    double y = 2;

    double r = pow(x,y);
    printf("%.2lf\n",r);
    r = sqrt(r);
    printf("%.2lf\n",r);
    printf("%.2lf\n", ceil(3.00001));
    printf("%.2lf\n", floor(10.55));
    printf("%.2lf\n", fmod(7.2, 2.3));

    // odd even number 

    if(fmod(9, 2) == 0){
        printf("This is Even Number\n");
    }else{
        printf("This is Odd Number\n");
    }

    printf("%.2lf\n",fabs(-50));

    
    printf("%.2lf\n",hypot(4, 4));
    
    printf("%.2lf",cbrt(64));

    // 3 * 3 * 3
    return 0;
}