/* ex13-2d.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /* 利用abs()取得絕對值 */
    int value, result;
    printf("請輸入一負的整數: ");
    scanf("%d", &value);
    result = abs(value);  /* 呼叫abs( ) */
    printf("|%d| = %d\n", value, result);
    system("PAUSE");
    return 0;
}
