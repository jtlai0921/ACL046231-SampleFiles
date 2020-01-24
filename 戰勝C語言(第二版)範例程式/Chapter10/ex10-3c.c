/* ex10-3c.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 使用字元陣列方式設定初值 */
    char str[10] = {'A', 'p', 'p', 'l', 'e', '\0'};
    printf("設定的字串是: ");
    puts(str); 
    system("PAUSE");
    return 0;
}
