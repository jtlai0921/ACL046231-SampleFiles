/* ex13-2b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char string[10];
    double result;
    printf("請輸入一浮點數的字串: ");
    gets(string);
    result = atof(string);  /* 呼叫atof( ) */
    printf("將字串轉換為浮點數: %.2f\n", result);
    system("PAUSE");
    return 0;
}
