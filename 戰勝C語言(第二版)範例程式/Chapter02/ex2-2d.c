/* ex2-2d.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int hour, min, sec;
    int year, month, days;
    char letter1, letter2;
    printf("請輸入兩個字元，中間以空白隔開: ");
    scanf("%c %c", &letter1, &letter2);   /* 輸入兩個字元 */
    printf("請輸入現在的時間? (hour:min:sec): ");
    scanf("%d:%d:%d", &hour, &min, &sec);  /* 輸入時間 */
    printf("請輸入現在的日期? (month-day-year): ");
    scanf("%d-%d-%d", &month, &days, &year);  /* 輸入日期 */
    printf("\n");
    printf("兩個字元分別為: %c 和 %c\n", letter1, letter2);
    printf("現在時間是: %d 點 %d 分 %d 秒\n", hour, min, sec);
    printf("現在的日期是: 西元 %d %d月 %d日\n", year, month, days);
    system("PAUSE");
    return 0;
}
