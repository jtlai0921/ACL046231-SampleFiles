/* ex6-7-3.c */
#include <stdio.h>
char gpa(int);
char gpa(int score)
{
    if (score >= 80) {
        return 'A';
    }
    else if (score >= 70) {
        return 'B';
    }
    else if (score >= 60) {
        return 'C';
    }
    else if (score >= 50) {
        return 'D';
    }
    else
        return 'F';
}

int main()
{
    int score;
    char grade;
    printf("請輸入成績: ");
    scanf("%d", &score);
    while (score >= 0) {
        grade = gpa(score);
        printf("%c\n\n", grade);
        printf("請輸入成績: ");
        scanf("%d", &score);
    }
    getchar();
    return 0;
}
