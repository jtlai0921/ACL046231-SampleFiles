/* ex13-1c.c */
#include <stdio.h>
#include <stdlib.h>
#define SQUARE1(n) n*n      /* 定義SQUARE1(n) */
#define SQUARE2(n) (n)*(n)  /* 定義SQUARE2(n) */

int square(int);    /* 定義一函數 */

int main()
{
    int sqrt;
    sqrt = SQUARE1(6+2);  
    printf("SQUARE1(6+2)=%d\n", sqrt);

    sqrt = SQUARE2(6+2);
    printf("SQUARE2(6+2)=%d\n", sqrt);

    sqrt = square(6+2);
    printf("square(6+2)=%d\n", sqrt);
    system("PAUSE");
    return 0;
}

int square(int n)
{
    return n*n;
}
