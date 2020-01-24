/* ex13-1a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 輸入5個整數，並將其輸出 */
    int array[5], i;  
    for(i = 0; i < 5; i++)  
    {
        printf("請輸入第 %d 個元素的資料: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n此陣列計有下列資料: \n");
    for(i = 0; i < 5; i++)   
        printf("array[%d]=%d\n", i, array[i]);
    system("PAUSE");
    return 0;
}
