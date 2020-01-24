/* ex8-2d.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    printf("num: %p\n", num);
    printf("*num: %d\n", *num);
    printf("num+1: %u\n", num++); /* 遞增num，發生錯誤 */
    printf("*num: %d", *num);
    system("PAUSE");
    return 0;
}
