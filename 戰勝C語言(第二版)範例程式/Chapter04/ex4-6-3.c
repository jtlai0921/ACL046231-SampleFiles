/* ex4-6-3.c */
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    _Bool a, b, c;
    printf("請輸入三邊長: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    a = side1+side2 > side3;
    b = side1+side3 > side2;
    c = side2+side3 > side1;
    if (a && b && c) {
        printf("%d, %d, %d 可構成一三角形\n", side1, side2, side3);
    }
    else {
        printf("%d, %d, %d 無法構成一三角形\n", side1, side2, side3);
    }

    return 0;
}
