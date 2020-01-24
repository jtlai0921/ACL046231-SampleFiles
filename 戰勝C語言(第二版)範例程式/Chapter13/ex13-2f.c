/* ex13-2f.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /* 利用sqrt()計算平方根 */
    double value, result;
    printf("請輸入一數值: ");
    scanf("%lf", &value);
    result = sqrt(value);  /* 呼叫sqrt() */
    printf("此數的平方根為: %.2f\n", result);
    system("PAUSE");
    return 0;
}
