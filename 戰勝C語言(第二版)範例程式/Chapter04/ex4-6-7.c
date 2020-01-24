/* ex4-6-7.c */
#include <stdio.h>
int main() {
    int i, j, k, temp;
    printf("請輸入三個整數: ");
    scanf("%d %d %d", &i, &j, &k);
    if (i>j) {
        temp = i;
        i = j;
        j = temp;
    }
    if (j>k) {
        temp = j;
        j = k;
        k = temp;
    }
    if (i>j) {
        temp = i;
        i = j;
        j = temp;
    }
    printf("由小至大排序: %d, %d, %d\n", i, j, k);
    return 0;
}
