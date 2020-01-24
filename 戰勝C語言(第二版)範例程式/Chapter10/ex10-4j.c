/* ex10-4j.c */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    /* 兩字串的比較 */
    char string1[30], string2[30];
    int difference, size;
    printf("請輸入第一個字串: ");
    gets(string1);  
    printf("請輸入第二個字串: ");
    gets(string2);   
    printf("請輸入要比較的字元數: ");
    scanf("%d", &size);  

    printf("執行strncmp比較的動作...\n\n");
    difference = strncmp(string1, string2, size);
    switch(difference)
    {
        case 0:  printf("%s 與 %s 是相同的\n", string1, string2); 
                break;
        case 1:  printf("%s 大於 %s\n", string1, string2); 
                break;       
        case -1: printf("%s 小於 %s\n", string1, string2); 
                break;  
    }          
    system("PAUSE");
    return 0;
}
