/* ex10-4b.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* 要求輸入一字串，並將小寫英文字母轉為大寫 */
    char string[30];
    printf("輸入全為小寫的字串: ");
    gets(string);  
    strupr(string); 
    printf("將小寫轉為大寫: %s\n", string);
    system("PAUSE");
    return 0;
}
