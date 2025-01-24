#include <stdio.h>
#include <string.h>
// string : sequence of characters and terminated by null character '\0'.
// string is a array of characters.
int main() {
    system("cls");
    char a[20]="James",b[20]="james";
    //strcpy(a,b);
    //strcat(a,b);
    //printf("%s\n",a);
    //strrev(a);
    printf("%s\n",a);
    //printf("%s\n",b);
    // int r = strcmp(a,b);
    int r = stricmp(a,b);
    if(r==0){
        printf("Both strings are same\n");
    }else{
        printf("Both strings are different\n");
    }
    // printf("%d\n",r);
    return 0;
}