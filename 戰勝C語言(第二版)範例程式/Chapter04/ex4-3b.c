/* ex4-3b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, big;
    printf("請輸入兩個整數: ");
    scanf("%d %d", &num1, &num2);

    /*將較大的數存放於big變數 */
    if(num1 > num2)  
        big = num1;
    else 
        big = num2;
    printf("最大數為 %d\n", big);
    system("PAUSE");
    return 0;
}
