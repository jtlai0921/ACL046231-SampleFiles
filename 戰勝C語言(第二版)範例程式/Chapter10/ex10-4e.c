/* ex10-4e.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* 要求輸入字串，拷貝字串前 N 個字元到另一字串 */
    char string1[30], string2[30]={'\0'};
    int size;
    printf("請輸入第一個字串: ");
    gets(string1); 
    printf("請問要拷貝多少個字元: ");
    scanf("%d", &size);   
    printf("執行拷貝的動作...\n\n");
    strncpy(string2, string1, size);  
    printf("第二個字串為: %s\n", string2);
    system("PAUSE");
    return 0;
}
