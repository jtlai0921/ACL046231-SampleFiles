/* ex5-1f.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 要求使用者不斷輸入數字，直到數字為負 */
    int num = 0;
    for( ; num>=0; )
    {
        printf("請輸入一整數(當此數為負時，將結束迴圈): ");
        scanf("%d", &num);
    }
    printf("輸入結束!!");
    system("PAUSE");
    return 0;
}
