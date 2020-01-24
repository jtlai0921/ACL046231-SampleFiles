/* ex6-3a.c */
#include <stdio.h>
#include <stdlib.h>
int square(int);        /* square()的原型宣告 */
int main()
{
    int num, ans; 
    printf("計算某一整數的平方\n\n");
    printf("請輸入一整數: ");
    scanf("%d", &num);
    ans = square(num);  /* 用ans接收square()的傳回值 */
    printf("%d 的平方是 %d\n", num, ans);
    system("PAUSE");
    return 0;
}

/* 定義square()，函數型態為int */
/* 要求輸入一數值，並將此數值平方後傳回 */
int square(int n)
{
    int total;
    total=n*n;
    return  total;      /* 將total傳回呼叫函數 */
}
