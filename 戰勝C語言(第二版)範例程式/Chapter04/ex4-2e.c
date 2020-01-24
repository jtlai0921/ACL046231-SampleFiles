/* ex4-2e.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("請輸入一整數: ");
    scanf("%d", &num);
    if(num > 0) 
    { 
        printf("%d 是大於 0\n", num);
        printf("所以 %d 是正整數\n", num);
    }
    else  
    { 
        printf("%d 是小於 0\n", num);
        printf("所以 %d 是負整數\n", num);
    }
    system("PAUSE");
    return 0;
}
