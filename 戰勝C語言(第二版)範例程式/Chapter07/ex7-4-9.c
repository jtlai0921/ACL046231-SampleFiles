/* ex7-4-9.c */
#include <stdio.h>

int main()
{
    int scores[10], i, total=0;
    int aboveAverage=0, belowAverage=0;
    double average;
    printf("請輸入十個分數: \n");
    for (i=0; i<10; i++) {
        printf("請輸入第 #%-2d 個分數: ", i+1);
        scanf("%d", &scores[i]);
        total += scores[i];
    }
    average = total /10.;
    printf("\n平均分數: %.2f", average);


    for (i=0; i<10; i++) {
        if (scores[i] >= average) {
            aboveAverage++;
        }
        else {
            belowAverage++;
        }
    }
    printf("\n\n");
    printf("高於 %.2f 的有 %d\n", average, aboveAverage);
    printf("低於 %.2f 的有 %d\n", average, belowAverage);

    getchar();
    return 0;
}
