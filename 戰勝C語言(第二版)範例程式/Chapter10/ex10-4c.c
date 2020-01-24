/* ex10-4c.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* 要求輸入一字串，將字串中英文大寫字母轉為小寫 */
    char string[30];
    printf("輸入全為大寫的字串: ");
    gets(string);  
    strlwr(string);  
    printf("將大寫轉為小寫: %s\n", string);
    system("PAUSE");
    return 0;
}
