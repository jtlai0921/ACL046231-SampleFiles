/* ex7-4-4.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[] = {1, 2, 3, 3, 2, 1, 4, 5, 7, 3};
    int check[10] = {0};
    int i, value;
    unsignedlong d = sizeof(num)/sizeof(num[0]);

    printf("原來陣列為: \n");
    for (i=0; i<d; i++) {
        printf("%2d ", num[i]);
    }

    printf("\n");
    printf("\n刪除重複數字後的陣列為: \n");
    for (i=0; i<10; i++) {
        value = num[i];
        if (check[value] == 0) {
            printf("%2d ", value);
            check[value] = 1;
        }
    }
    getchar();
    return 0;
}
