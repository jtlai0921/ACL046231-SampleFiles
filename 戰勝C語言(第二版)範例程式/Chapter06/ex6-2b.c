/* ex6-2b.c */
#include <stdio.h>
#include <stdlib.h>
void test();  /* test()的原型宣告 */
int main()
{
    printf("此程式在測試 return 的作用\n");
    printf("測試開始!!\n");
    test();  /* 呼叫test() */
    printf("測試結束!!\n");
    system("PAUSE");
    return 0;
}

/* test()的定義 */
/* 利用for迴圈測試return; 的效力 */
void test()
{
    int i, a, b;
    for(i = 1; i <= 10; i++)  /* 會執行10次的for迴圈 */
    {
        printf("請輸入 a 和 b: ");
        scanf("%d %d", &a, &b);
        if(b == 0) 
            return;  /* 當b=0時，執行return; */
        else 
            printf("%d/%d=%d\n", a, b, a/b);
        printf("for 迴圈跑了 %d 次\n\n", i);
    }
}
