/* ex10-4a.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* 要求輸入一個字串，並計算字串長度 */
    char string[30];
    int length;
    printf("請輸入一字串: ");
    gets(string);
    length = strlen(string);
    printf(" %s字串的長度為: %d\n", string, length);
    system("PAUSE");
    return 0;
}
