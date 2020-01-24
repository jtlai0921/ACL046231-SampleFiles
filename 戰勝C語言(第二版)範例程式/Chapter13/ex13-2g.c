/* ex13-2g.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /* 利用pow()取得某數的n次方值 */
    double value, n, result;
    printf("請輸入一數值: ");
    scanf("%lf", &value);

    printf("多少次方: ");
    scanf("%lf", &n);

    result = pow(value, n);    
    printf("%.1f 的%.1f次方為: %.2f\n", value, n, result);
    system("PAUSE");
    return 0;
}
