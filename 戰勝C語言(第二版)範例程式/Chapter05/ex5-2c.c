/* ex5-2c.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{   
    /* 要求使用者輸入單字，計算字數 */
    char letter;
    int count = 0;
    printf("請輸入一行文字: ");
    scanf("%c", &letter);
    while(letter != '\n') 
    {
        count++;
        scanf("%c", &letter);
    }
    printf("此行共有 %d 字\n", count);
    system("PAUSE");
    return 0;
}
