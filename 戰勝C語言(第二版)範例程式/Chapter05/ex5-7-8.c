/* ex5-7-8.c */
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    double sum = 0.0;
    for (i=1; i<=999; i++) {
        sum += 1/(sqrt(i)+sqrt(i+1));
    }
    printf("sum = %.3f\n", sum);
    return 0;
}
