/* ex10-4g.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* 要求輸入字串，將一字串的前N個字元，附加到另一個字串 */
    char string1[30], string2[30];
    int size;
    printf("請輸入第一個字串: ");
    gets(string1); 
    printf("請輸入第二個字串: ");
    gets(string2);   
    printf("請問要附加多少個字元: ");
    scanf("%d", &size);  /* 輸入附加字元數 */
    printf("執行附加的動作...\n\n");
    strncat(string2, string1, size);  /* 呼叫strncat( )函數 */
    printf("第一個字串為: %s\n", string1);
    printf("第二個字串為: %s\n", string2);
    system("PAUSE");
    return 0;
}
