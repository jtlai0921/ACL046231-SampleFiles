/* ex7-4-6.c */
#include <stdio.h>

int main()
{
    double arr[10];
    int i;
    double highest = -999;
    printf("請輸入十個資料:\n");
    for (i=0; i<10; i++) {
        printf("請輸入 #%-2d 資料: ", i+1);
        scanf("%lf", &arr[i]);
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }

    printf("highest score: %.2f\n", highest);
    for (i=0; i<10; i++) {
        if (arr[i] >= highest - 5) {
            printf("arr[%d] = %.2f", i, arr[i]);
            printf(", 其對應的成績等級為 A.\n");
        }
        else if (arr[i] >= highest - 10) {
            printf("arr[%d] = %.2f", i, arr[i]);
            printf(", 其對應的成績等級為 B.\n");
        }
        else if (arr[i] >= highest - 15) {
            printf("arr[%d] = %.2f", i, arr[i]);
            printf(", 其對應的成績等級為 C.\n");
        }
        else if (arr[i] >= highest - 20) {
            printf("arr[%d] = %.2f", i, arr[i]);
            printf(", 其對應的成績等級為 D.\n");
        }
        else {
            printf("arr[%d] = %.2f", i, arr[i]);
            printf(", 其對應的成績等級為 F.\n");
        }
    }
    getchar();
    return 0;
}
