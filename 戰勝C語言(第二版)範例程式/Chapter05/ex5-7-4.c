/* ex5-7-4.c */
#include <stdio.h>
int main()
{
    double fact = 1;
    int i, limit;
    printf("請輸入一整數: ");
    scanf("%d", &limit);
    for (i=1; i<=limit; i++) {
        fact *= i;
        printf("%d! = %.f\n", i, fact);
    }
    return 0;
}
