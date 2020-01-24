/* ex4-5a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{   
    /* switch敘述不使用break; */
    int num;
    printf("請輸入一整數: ");
    scanf("%d", &num);
    switch(num)
    {
        case 1: printf("友子\n");
        case 2: printf("阿嘉\n");
        case 3: printf("茂伯\n");
        case 4: printf("馬拉桑\n");
        default: printf("你不是海角七號的演員\n");
    }
    system("PAUSE");
    return 0;
}
