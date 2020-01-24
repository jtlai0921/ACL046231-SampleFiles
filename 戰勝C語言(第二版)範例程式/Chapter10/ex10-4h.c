/* ex10-4h.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* 兩字串的比較 */
    char string1[30], string2[30];
    int difference;
    printf("請輸入第一個字串: ");
    gets(string1);  
    printf("請輸入第二個字串: ");
    gets(string2);   
    printf("執行比較的動作...\n\n");
    difference = strcmp(string1, string2);
    switch(difference)
    {
        case 0: printf("%s 與 %s 是相同的\n", string1, string2); 
                break;
        case 1: printf("%s 大於 %s\n", string1, string2); 
                break;       
        case -1: printf("%s 小於 %s\n", string1, string2); 
                break;  
    }          
    system("PAUSE");
    return 0;
}
