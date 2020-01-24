/* ex13-1b.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 5     /* 使用#define定義陣列元素為5個 */
int main()
{
    /* 更改範例13-1a */
    /* 輸入5個整數，並將其輸出 */
    int array[MAX], i;  
    for(i = 0; i < MAX; i++)  
    {
        printf("請輸入第 %d 個元素的資料: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n此陣列計有下列資料: \n");
    for(i = 0; i < MAX; i++)   
        printf("array[%d]=%d\n", i, array[i]);
    system("PAUSE");
    return 0;
}
