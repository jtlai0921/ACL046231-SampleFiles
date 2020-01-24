/* ex6-4a.c */
#include <stdio.h>
#include <stdlib.h>
int number;         /* number是一個全域變數 */
void output();      /* output()的原型宣告 */
int main()
{
    printf("Please enter a number: ");
    scanf("%d", &number); 
    output( );  
    system("PAUSE");
    return 0;
}

/* 定義output() */
void output()
{
    printf("Number is %d\n", number); 
}
