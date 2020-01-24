/* ex13-2e.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /* 利用exp()計算指數值 */
    double value, result;
    printf("請輸入一浮點數: ");
    scanf("%lf", &value);
    result = exp(value);  /* 呼叫exp( ) */
    printf("exp(%.2f) = %.2g\n", value, result);
    system("PAUSE");
    return 0;
}
