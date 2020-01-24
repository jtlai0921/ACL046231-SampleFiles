/* ex4-3a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, big;
    printf("請輸入兩個整數: ");
    scanf("%d %d", &num1, &num2);

    /*將較大的數存放於big變數 */
    big = (num1 > num2) ? num1 : num2;
    printf("最大數為 %d\n", big);
    system("PAUSE");
    return 0;
}
