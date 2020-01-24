/* ex8-2e.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    /* 修改範例 8-2d, 使其可以執行 */
    int num[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    printf("num: %p\n", num);
    printf("*num: %d\n", *num);
    printf("num+1: %p\n", num+1); 
    printf("*num: %d\n", *num);
    system("PAUSE");
    return 0;
}
