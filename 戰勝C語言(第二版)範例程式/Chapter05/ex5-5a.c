/* ex5-5a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 要求輸入一個單字，顯示並計算字元個數 */
    char letter;
    int count = 0;
    printf("請輸入一個單字: ");
    scanf("%c", &letter);
    while(letter != '\n')
    {
        if(letter == 'a')   /* 若遇到字元為a，則強迫跳離 */
            break;
        if(letter != '\n')
        {
            count++;
            printf("%c", letter);
        }
        scanf("%c", &letter);
    }
    printf("共有 %d 字元\n", count);
    system("PAUSE");
    return 0;
}
