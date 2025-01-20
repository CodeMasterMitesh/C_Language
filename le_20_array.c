#include <stdio.h>
// what is array?
// store multiple data in single variable but same datatype
int main() {
    system("cls");
    int x = 10;
    int studentid[10] = {1,2,3,4,5,6,7,8,9,10};  // single dimention index array 
    studentid[1] += 20;

    for (int i = 0; i < 10; i++)
    {
        printf("studentid is %d => %d\n",i,studentid[i]);
    }
    // studentid[0];
    // studentid[1];
    // studentid[2];
    // printf("studentid in 0 index = %d\n",studentid[0]);
    // printf("studentid in 1 index = %d\n",studentid[1]);
    // printf("studentid in 2 index = %d\n",studentid[2]);
    // printf("studentid in 3 index = %d\n",studentid[3]);
    // printf("studentid in 4 index = %d\n",studentid[4]);
    // printf("studentid in 5 index = %d\n",studentid[5]);
    // printf("studentid in 6 index = %d\n",studentid[6]);
    // printf("studentid in 7 index = %d\n",studentid[7]);
    // printf("studentid in 8 index = %d\n",studentid[8]);
    // printf("studentid in 9 index = %d\n",studentid[9]);

    return 0;
}