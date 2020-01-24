/* ex6-7-7.c */
#include <stdio.h>
void leapYear(int begin, int end);

int main() 
{
    int begin, end;
    printf("請輸入起始的西元年份: ");
    scanf("%d", &begin);
    printf("請輸入結束的西元年份: ");
    scanf("%d", &end);
    leapYear(begin, end);
    getchar();
    return 0;
}

void leapYear(int begin, int end)
{
    int i;
    _Bool a, b, c;
    for(i=begin; i<=end; i++) {
        a = (i % 400 == 0);
        b = (i % 4 == 0);
        c = (i % 100 != 0);
        if(a || (b && c)) {
            printf("%6d\n", i);
        }
    }
}
