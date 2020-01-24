/* ex6-4c.c */
#include <stdio.h>
#include <stdlib.h>
int number = 100;  /* 定義全域變數 */
void output();  
int main()
{
    printf("number is %d\n", number);
    output();  
    system("PAUSE");
    return 0;
}

/* 定義output() */
void output()
{
    int number = 200;  /* 定義區域變數 */
    printf("number is %d\n", number);  
}
