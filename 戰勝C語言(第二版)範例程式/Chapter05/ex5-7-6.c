/* ex5-7-6.c */
#include <stdio.h>
int main()
{
    int year;
    _Bool a, b;
    for (year=2000; year<2100; year++) {
        a = year % 400 == 0;
        b = (year % 4 == 0 && year % 100 != 0);
        if ( a || b) {
            printf("%d is leap year.\n", year);
        }
    }
    return 0;
}
