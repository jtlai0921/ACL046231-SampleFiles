/* ex5-1e.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 將範例5-1a的設定初值、條件判斷式及更新運算式省略 */
    int num = 0;
    for( ; ; )     
    {
        if(num > 5)  /* 若num 大於5，則執行break，以結束for迴圈 */
            break;
        printf("Num is %d\n", num);
        num++; 
    }
    system("PAUSE");
    return 0;
}
