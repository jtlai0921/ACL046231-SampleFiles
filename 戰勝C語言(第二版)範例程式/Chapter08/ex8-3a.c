/* ex8-3a.c */
#include <stdio.h>
#include <stdlib.h> 
void change(int, int);  /* 函數change( )的原型宣告 */
int main()
{
    int x, y;
    printf("請輸入 x: ");
    scanf("%d", &x);
    printf("請輸入 y: ");
    scanf("%d", &y);
    /* 呼叫change函數，將x、y傳遞給change( )函數 */
    change(x, y);  
    printf("\n呼叫對調的函數後!!\n");
    /* 執行完change函數後，印出x及y */
    printf("x 是 %d\n", x);
    printf("y 是 %d\n", y);
    system("PAUSE");
    return 0;
}

/* 定義change函數，參數為a、b */
/* 交換a及b的值 */
void change(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
