/* ex10-4f.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* 要求輸入兩個字串，將第一個字串附加到第二個字串後 */
    char string1[30], string2[30];
    printf("請輸入第一個字串: ");
    gets(string1);  /* 輸入第一個字串 */
    printf("請輸入第二個字串: ");
    gets(string2);  /* 輸入第二個字串 */
    printf("執行附加的動作...\n");
    strcat(string2, string1);  /* 呼叫strcat( )函數 */
    printf("第一個字串為: %s\n", string1);
    printf("第二個字串為: %s\n", string2);
    system("PAUSE");
    return 0;
}
