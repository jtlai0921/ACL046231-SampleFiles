/* ex2-2a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("請輸入一整數值: ");
    scanf("%d", &x);  /* &為位址運算子 */
    printf("您輸入的整數是 %d\n", x);
    system("PAUSE");
    return 0;
}
