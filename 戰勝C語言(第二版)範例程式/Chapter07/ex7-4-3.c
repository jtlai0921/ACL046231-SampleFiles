/* ex7-4-3.c */
#include <stdio.h>
void selectionSort(int []);

int main()
{
    int num[10], i, k;
    printf("請輸入十個資料: \n");
    for (i=0; i<10; i++) {
        printf("請輸入第 #%-2d 個資料: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("陣列原始資料: \n");
    for (k=0; k<10; k++) {
        printf("%3d ", num[k]);
    }
    selectionSort(num);
    getchar();
    return 0;
}

void selectionSort(int arr[])
{
    int currentMin, currentMinIndex, i, j, k;
    for (i=0; i<10; i++) {
        currentMin = arr[i];
        currentMinIndex = i;
        for (j=i+1; j<10; j++) {
            if (arr[j] < currentMin) {
                currentMin = arr[j];
                currentMinIndex = j;
            }
        }
        if (currentMinIndex != j) {
            arr[currentMinIndex] = arr[i];
            arr[i] = currentMin;
        }

        printf("\n第 %d 選擇比較後陣列的資料: \n", i+1);
        for (k=0; k<10; k++) {
            printf("%3d ", arr[k]);
        }
    }

    printf("\n陣列排序後的資料: \n");
    for (k=0; k<10; k++) {
        printf("%3d ", arr[k]);
    }
}
