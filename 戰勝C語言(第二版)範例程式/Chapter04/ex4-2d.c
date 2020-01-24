/* ex4-2d.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("正確的數字範圍是從 100 到 200\n");
    printf("請輸入一數字: ");
    scanf("%d", &num);
    if(num >= 100 && num <= 200)
        printf("此為正確的數字!!\n");
    else
        printf("此為不正確的數字!!\n");
    system("PAUSE");
    return 0;
}
