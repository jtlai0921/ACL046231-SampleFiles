/* ex6-7-6.c */
#include <stdio.h>
double series(int);

double series(int n)
{
    int i;
    double total=0.0;
    for(i=1; i<=n; i++)
        total += (double)i/(i+1);
    return total;
}

int main()
{
    int number;
    double tot;
    printf("請輸入一整數: ");
    scanf("%d", &number);
    tot = series(number);
    printf("1/2 + 2/3 + … + %d/(%d+1) = %.3f\n", 
                                number, number, tot);
}
