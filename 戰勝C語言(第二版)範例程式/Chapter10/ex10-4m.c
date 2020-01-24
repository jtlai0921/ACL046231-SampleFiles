/* ex10-4m.c */
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char string[30], ch, *ptr;
    printf("請輸入一字串: ");
    gets(string);  
    printf("請輸入欲搜尋的字元: ");
    ch = getche( );
    printf("搜尋中...\n\n");
    ptr = strrchr(string, ch);  
    printf("字串的第一個字元的位址是: %x\n", string);
    printf("字元%c在字串%s的位址是: %x\n", ch, string, ptr);
    system("PAUSE");
    return 0;
}
