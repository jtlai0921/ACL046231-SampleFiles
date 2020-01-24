/* ex13-2a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char string[10];
    int result;
    printf("請輸入一整數的字串: ");
    gets(string);
    result = atoi(string);  
    printf("將字串轉換為整數: %d\n", result);
    system("PAUSE");
    return 0;
}
