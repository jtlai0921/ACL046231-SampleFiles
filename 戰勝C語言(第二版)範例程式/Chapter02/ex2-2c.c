/* ex2-2c.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    float f_num;
    double d_num;
    /* 要求輸入各種格式的值 */

    printf("請輸入一字元: ");
    scanf("%c", &ch);   
    
    printf("請輸入float浮點數: ");
    scanf("%f", &f_num);  

    printf("請輸入double浮點數: ");
    scanf("%lf", &d_num); 

    /* 將輸入結果輸出至螢幕上 */
    printf("---------------------------------------------\n");
    printf("您輸入的字元是 %c\n", ch);
    printf("您輸入的float浮點數是 %f\n", f_num);
    printf("您輸入的double浮點數是 %f\n", d_num);
    system("PAUSE");
    return 0;
}
