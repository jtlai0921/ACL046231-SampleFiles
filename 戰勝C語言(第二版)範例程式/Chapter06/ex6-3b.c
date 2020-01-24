/* ex6-3b.c */
#include <stdio.h>
#include <stdlib.h>
void printstar(int);    /* printstar()的原型宣告 */
int main()
{
    int num;
    printf("請問要多少個*: ");
    scanf("%d", &num);
    printstar(num);
    system("PAUSE");
    return 0;
}

void printstar(int n)
{
    int i;
    for(i=1; i<n; i++)
        printf("*");
    printf("\n");
}
