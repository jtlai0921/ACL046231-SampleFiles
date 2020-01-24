/* ex4-5b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{   
    /* switch敘述不使用break; */
    int num;
    printf("請輸入演員代號: ");
    scanf("%d", &num);
    switch(num)
    {
        case 1: printf("友子\n");
                break;
        case 2: printf("阿嘉\n");
                break;
        case 3: printf("茂伯\n");
                break;
        case 4: printf("馬拉桑\n");
                break;
        default: printf("你不是海角七號的演員\n");
    }
    system("PAUSE");
    return 0;
}
