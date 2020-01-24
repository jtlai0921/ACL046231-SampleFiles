/* ex5-4b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 以巢狀for迴圈輸出九九乘法表 */
    int i, j;
    printf("%44s", "<< 九九乘法表 >>\n");
    for(i=1; i<=9; i++) {    /* 此為外迴圈 */
        for(j=1; j<=9; j++)   /* 此為內迴圈 */
            printf("%d*%d=%2d  ", i, j, i*j);
        printf("\n");
    }      system("PAUSE");
    return 0;
}
