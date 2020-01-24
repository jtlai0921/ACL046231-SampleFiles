/* ex8-3b.c */
#include <stdio.h>
#include <stdlib.h>
void change(int *, int *);  
int main()
{
    int x, y;
    printf("請輸入 x: ");
    scanf("%d", &x);
    printf("請輸入 y: ");
    scanf("%d", &y);
    /* 呼叫change函數 */
    /* 傳遞x及y的位址給change( )函數 */
    change(&x, &y);
    /* 執行完change函數後，印出x及y */
    printf("\n呼叫對調的函數後!!\n");
    printf("x 是 %d\n", x);
    printf("y 是 %d\n", y);
    system("PAUSE");
    return 0;
}

/* 定義change函數，參數為 *a、*b */
/* 交換*a及*b的值 */
void change(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
