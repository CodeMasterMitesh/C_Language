#include <stdio.h>
#include <string.h>
// string : sequence of characters and terminated by null character '\0'.
// string is a array of characters.
int main() {
    system("cls");
    char a[20],b[20];
    printf("Enter any word: ");
    scanf("%s",a);
    printf("%s\n",a);
    strcpy(b,a);
    puts(b);
    strrev(a);
    puts(a);
    int r = stricmp(a,b);
    if(r==0){
        printf("This is Palindrom\n");
    }else{
        printf("This is not Palindrom\n");
    }
    int l = strlen(a);
    printf("lendth of a is : %d\n",l);
    strupr(a);
    puts(a);
    char c[20] = "HeLlo";
    strlwr(c);
    puts(c);
    return 0;
}