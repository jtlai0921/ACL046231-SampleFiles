/* ex5-5b.c*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num, total=0;
    printf("輸入10 個整數，累加正整數，當輸入的值是負數，則結束迴圈\n");
    for(i=1; i<=10; i++) 
    {
        printf("請輸入第 %2d 個整數: ", i);
        scanf("%d", &num);
        if ( num >= 0)
            total += num;
        else
            break;
    }      
    printf("Total=%d\n", total); 
    system("PAUSE");     
    return 0;
}
