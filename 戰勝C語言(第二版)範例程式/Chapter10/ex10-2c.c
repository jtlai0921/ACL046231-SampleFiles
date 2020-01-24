/* ex10-2c.c */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char ch;
    printf("請輸入一個字元: ");
    ch = getche();
    if(isupper(ch))  
        printf("\n%c 是大寫英文字母 \n", ch);
    else if(islower(ch)) 
        printf("\n%c 是小寫英文字母\n", ch);
    else           
        printf("\n%c 不是英文字母\n", ch);
    system("PAUSE");
    return 0;
}
