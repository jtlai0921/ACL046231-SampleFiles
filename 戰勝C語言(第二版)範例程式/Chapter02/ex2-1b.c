/* ex2-1b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number = 8;
    char letter = 'z';
    /* %d、%c為格式特定字 */
    printf("1 加 1 是 %d\n", 2);
    printf("1 加 7 是 %d\n", number);
    printf("%c 是第一個英文字母\n", 'a');
    printf("%c 是最後一個英文字母\n", letter);
    system("PAUSE");
    return 0;
}
