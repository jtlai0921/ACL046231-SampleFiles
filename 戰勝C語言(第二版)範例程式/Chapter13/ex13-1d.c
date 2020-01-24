/* ex13-1d.c */
#include <stdio.h>
#include <stdlib.h>

#define RATE 32.68
#ifndef RATE
#define RATE 32.78
#endif 

int main()
{
    double usDollar, ntDollar;
    printf("請輸入您有多少美金? ");
    scanf("%lf", &usDollar);

    ntDollar=usDollar*RATE;
    printf("您可換 %.2f 的台幣。\n", ntDollar);
    system("PAUSE");
    return 0;
}
