/* ex6-3c.c */
#include <stdio.h>
#include <stdlib.h>
int squAdd(int, int); 
void printstar(int); 
int main()
{
    int num1, num2, sum, star;
    printf("此程式在計算兩整數的平方和\n\n");
    printf("請輸入兩個整數: ");
    scanf("%d %d", &num1, &num2);
    /* 傳遞兩個變數num1、num2到squAdd()函數 */
    /* 使用變數sum接收函數傳回值 */
    sum = squAdd(num1, num2);
    printf("請問要多少個*: ");
    scanf("%d", &star);
    printstar(star);
    printf("%d 的平方加　%d 的平方為 %d\n", num1, num2, sum);
    printstar(star);
    system("PAUSE");
    return 0;
}

/* 定義squAdd()，函數型態為int，參數為a、b */
/* 計算a、b的平方和後回傳 */
int squAdd(int a, int b)
{
    int ans;
    ans = a * a + b * b;
    return ans;
}

void printstar(int n)
{
    int i;
    for(i=1; i<=n; i++)
        printf("*");
    printf("\n");
}
