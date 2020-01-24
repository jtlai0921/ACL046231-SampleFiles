/* ex10-3a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 字串輸出入，使用printf()及scanf() */
    char str[10];  
    printf("Please enter a string: ");
    scanf("%s", str);   
    printf("The string is %s\n", str); 
    system("PAUSE");
    return 0;
}
