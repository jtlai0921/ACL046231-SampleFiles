/* ex7-4-5.c */
#include <stdio.h>
int main()
{
    int arr2[3][4];
    int i, j;
    int sumOfRow[3] = {0, 0, 0};

    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf("請輸入arr2[%d][%d]的值: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\n此二維陣列如下:\n");
    for (i=0; i<3; i++) {
    for (j=0; j<4; j++)
        printf("%3d ", arr2[i][j]);
        printf("\n");
    }

    printf("\n");
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            sumOfRow[i] += arr2[i][j];
        }
        printf("第 %d 列的和為: %d\n", i+1, sumOfRow[i]);
    }
    getchar();
    return 0;
} 
