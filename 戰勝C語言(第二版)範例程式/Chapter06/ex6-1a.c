/* ex6-1a.c */
#include <stdio.h>
#include <stdlib.h>
void output(void);   /* 函數原型宣告 */
int main()
{
    printf("呼叫output函數!!\n");
    output();      /* 呼叫output( )函數 */
    printf("呼叫結束，over!!\n");
    system("PAUSE");
    return 0;
}

/* output()函數的定義 */
void output(void)   
{ 
    printf("我喜歡iPhone XS\n");
    printf("也喜歡Apple watch\n");
}
