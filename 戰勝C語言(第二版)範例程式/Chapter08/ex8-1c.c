/* ex8-1c.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 要求輸入半徑以計算圓面積 */
    double pi = 3.14, radius, area;
    double *ptr = &pi;  /* 設定ptr初值為&pi */

    printf("請輸入圓的半徑: ");
    scanf("%lf", &radius);  
    area = radius * radius * pi;
    printf("圓的面積為 %.2f\n", area, pi);

    *ptr = 3.14159;  /* 藉由*ptr更改pi的值 */
    area = radius * radius * pi;
    printf("經由*ptr更改pi為3.14159後，面積為%.3f\n", area);
    system("PAUSE");
    return 0;
}
