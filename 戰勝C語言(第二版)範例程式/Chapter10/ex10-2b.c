/* ex10-2b.c */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char ch;
    printf("請輸入一個字元: ");
    ch = getche();
    if(isalpha(ch))  
        printf("\n%c 為英文字母\n", ch);
    else if(isdigit(ch)) 
        printf("\n%c 為數字\n", ch);
    else  
        printf("\n%c 不是一英文字母或數字\n", ch);
    system("PAUSE");
    return 0;
}
