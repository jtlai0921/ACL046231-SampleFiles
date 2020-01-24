/* ex10-4d.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* 要求輸入一字串，並將字串拷貝到另一字串 */
    char string1[30], string2[30];
    printf("請輸入第一個字串: ");
    gets(string1);  
    printf("執行拷貝的動作...\n");
    strcpy(string2, string1);  /* 呼叫strcpy( )函數 */
    printf("第二個字串為: %s\n", string2);
    system("PAUSE");
    return 0;
}
