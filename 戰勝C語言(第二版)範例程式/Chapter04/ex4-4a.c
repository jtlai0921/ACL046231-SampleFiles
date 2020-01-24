/* ex4-4a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("請輸入一整數: ");
    scanf("%d", &num);
    if(num > 0)  
        printf("%d 是一正整數\n", num);
    else if(num < 0)   
        printf("%d 是一負整數\n", num);
    else  
        printf("%d 是0\n", num);
    system("PAUSE");
    return 0;
}
