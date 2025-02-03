#include <stdio.h>
// structure with array
typedef struct{
    int roll_no; 
    char name[30];
    float perc;
    int subjectWiseMarks;

}Student;

int main() {
    system("cls");
   
    // Student s1;
    // printf("Enter Student Data roll no,name,percentage :");
    // gets(s1.name);
    // scanf("%d",&s1.roll_no);
    // scanf("%f",&s1.perc);

    // printf("~~~~~~~~~~~~~~~~Student Data~~~~~~~~~~~~~~~~~~~~\n");
    // printf("Student Roll No :%d\n",s1.roll_no);
    // printf("Student Name :%s\n",s1.name);
    // printf("Student Perc :%.2f\n",s1.perc);
    // printf("~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~~\n");
    Student s1[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Student Data roll no,name,percentage :");
        fflush(stdin);
        gets(s1[i].name);
        scanf("%d",&s1[i].roll_no);
        fflush(stdin);
        scanf("%f",&s1[i].perc);
    }

    printf("~~~~~~~~~~~~~~~~Students Data~~~~~~~~~~~~~~~~~~~~\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d Roll No :%d\n",i+1,s1[i].roll_no);
        printf("Student %d Name :%s\n",i+1,s1[i].name);
        printf("Student %d Perc :%.2f\n",i+1,s1[i].perc);
    }
    printf("~~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~~~~~~\n");
    

    return 0;
}