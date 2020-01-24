/* ex5-1b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 0;  /* 設定num初值為0 */ 
    for( ; num<=5; num++)  /* 省略初值的設定 */ 
    {
        printf("Num is %d\n", num);
    }
    system("PAUSE");
    return 0;
}
