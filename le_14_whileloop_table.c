#include <stdio.h>
int main() {
    
    int n = 1;
    int table = 7;

    while (n <= 10)  // 11<=10  false 
    {
       printf("%d * %d = %d\n",table,n,table * n);
       n++;
    }

    // while 
    // -> jo condition true hase to ane to j while loop na statment exucute thase

    // loop 1 n = 1 ,,  n = 2
    // loop 2 n =3


    // 7 * 1 = 7
    // 7 * 2 = 14
    // 7 * 3 = 21
    return 0;
}