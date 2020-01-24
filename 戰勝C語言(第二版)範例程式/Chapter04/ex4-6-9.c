/* ex4-6-9.c */
#include <stdio.h>
int main()
{
    int year, rem;
    printf("請輸入一出生的年份(西元): ");
    scanf("%d", &year);
    rem = year % 12;
    switch (rem) {
        case 0:
            printf("你的生肖屬猴\n");
            break;
        case 1:
            printf("你的生肖屬雞\n");
            break;
        case 2:
            printf("你的生肖屬狗\n");
            break;
        case 3:
            printf("你的生肖屬豬\n");
            break;
        case 4:
            printf("你的生肖屬鼠\n");
            break;
        case 5:
            printf("你的生肖屬牛\n");
            break;
        case 6:
            printf("你的生肖屬虎\n");
            break;
        case 7:
            printf("你的生肖屬兔\n");
            break;
        case 8:
            printf("你的生肖屬龍\n");
            break;
        case 9:
            printf("你的生肖屬蛇\n");
            break;
        case 10:
            printf("你的生肖屬馬\n");
            break;
        case 11:
            printf("你的生肖屬羊\n");
            break;
    }
    return 0;
}
