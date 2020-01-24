/* ex4-6-1.c */
#include <stdio.h>
int main() 
{
    int year;

    printf("請輸入一年份: ");
    scanf("%d", &year);
    _Bool isLeapYear = (year%400 == 0 || (year%4 == 0 
                                    && year%100 != 0));

    if (isLeapYear)
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);
    return 0;
}
