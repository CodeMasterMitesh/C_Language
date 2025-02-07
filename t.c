#include <stdio.h>
#include <string.h>

struct SubjectWiseMarks {
    int eng;
    int maths;
    int comp;
};

struct Student {
    int stud_rollno;
    char stud_name[20];
    struct SubjectWiseMarks sub;
    int total;
    float per;
};

float HighestPercentage(float percentages[], int n) {
    float max = percentages[0]; //1 , 2 , 3
    for (int i = 1; i < n; i++) {
        if (percentages[i] > max) {
            max = percentages[i];
        }
    }
    return max;
}

float LowestPercentage(float percentages[], int n) {
    float min = percentages[0];
    for (int i = 1; i < n; i++) {
        if (percentages[i] < min) {
            min = percentages[i];
        }
    }
    return min;
}

int main() {
    system("cls");
    struct Student s1[3];
    float percentages[3];
    float avgPer = 0;
    float hPer, lPer;

    for (int i = 0; i < 3; i++) {
        printf("ENTER STUDENT ROLL_NO: ");
        scanf("%d", &s1[i].stud_rollno);
        printf("ENTER STUDENT NAME: ");
        scanf("%s", s1[i].stud_name);
        printf("ENTER MARKS FOR ENGLISH, MATHS, COMPUTER: ");
        scanf("%d%d%d", &s1[i].sub.eng, &s1[i].sub.maths, &s1[i].sub.comp);

        s1[i].total = s1[i].sub.eng + s1[i].sub.maths + s1[i].sub.comp;
        s1[i].per = (float)s1[i].total * 100 / 300;
        percentages[i] = s1[i].per;
        avgPer += s1[i].per;
    }

    avgPer /= 3;
    hPer = HighestPercentage(percentages, 3);
    lPer = LowestPercentage(percentages, 3);

    printf("********************All Student Data ************************\n");
    for (int i = 0; i < 3; i++) {
       printf("********************Student %d Data ************************\n",i+1);
        printf("STUDENT ROLL_NO: %d\n", s1[i].stud_rollno);
        printf("STUDENT NAME: %s\n", s1[i].stud_name);
        printf("ENGLISH MARKS: %d\n", s1[i].sub.eng);
        printf("MATHS MARKS: %d\n", s1[i].sub.maths);
        printf("COMPUTER MARKS: %d\n", s1[i].sub.comp);
        printf("TOTAL MARKS: %d\n", s1[i].total);
        printf("PERCENTAGE: %.2f%%\n", s1[i].per);
        printf("********************************************\n");
    }

    printf("Average Percentage: %.2f%%\n", avgPer);
    printf("Highest Percentage: %.2f%%\n", hPer);
    printf("Lowest Percentage: %.2f%%\n", lPer);
    printf("******************** END OF PROGRAM ************************\n");

    return 0;
}
