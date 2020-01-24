/* ex7-4-7.c */
#include <stdio.h>
int main()
{
    int arr3[2][2][3];
    int i, j, k;
    int minIndex1, minIndex2, minIndex3;
    int maxIndex1, maxIndex2, maxIndex3;
    int min = 9999;
    int max = -9999;
    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            for (k=0; k<3; k++) {
                printf("請輸入arr3[%d][%d][%d]的值: ", i, j, k);
                scanf("%d", &arr3[i][j][k]);
                if (arr3[i][j][k] < min) {
                    min = arr3[i][j][k];
                    minIndex1 = i;
                    minIndex2 = j;
                    minIndex3 = k;
                }
                if (arr3[i][j][k] > max) {
                    max = arr3[i][j][k];
                    maxIndex1 = i;
                    maxIndex2 = j;
                    maxIndex3 = k;
                }
            }
        }
    }
    printf("最大值為 %d 在 arr3[%d][%d][%d]\n", max, maxIndex1, 
                    maxIndex2, maxIndex3);
    printf("最小值為 %d 在 arr3[%d][%d][%d]\n", min, minIndex1, 
                    minIndex2, minIndex3);
    return 0;
}
