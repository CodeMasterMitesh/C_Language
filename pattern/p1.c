#include <stdio.h>

int main() {
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    
    // outer loop 1 time itration than same time inner loop itration 5 time 
    // *****
    // *****
    // *****
    // *****
    // *****
    // task
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    return 0;
}