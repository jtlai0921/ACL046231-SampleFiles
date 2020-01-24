/* ex13-2c.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 使用strtol( )函數將字串某一基底數，轉換為長整數 */
    char string[20], *endptr;
    long int final;
    int base;
    printf("請輸入一字串: ");
    scanf("%s", string);
    printf("基底數是多少? ");
    scanf("%d", &base);
    final = strtol(string, &endptr, base);  
    printf("轉換後的結果為: %ld\n", final);
    printf("endptr指向: %s\n", endptr);
    system("PAUSE");
    return 0;
}
