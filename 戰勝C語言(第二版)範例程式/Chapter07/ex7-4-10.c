/* ex7-4-10.c */
#include <stdio.h>
#include <math.h>

int main()
{
    int numbers[20];
    double sum=0.0;
    int i=0 , x;
    while(i <= 20) {
        printf("請輸入二進位數字串: ");
        scanf("%d", &numbers[i]);
        if (numbers[i] == 0 || numbers[i] == 1) {
            i++;
        }
        else {
            break;
        }
    }

    for (x=i-1; x>=0; x--) {
        printf("numbers[%d] = %d\n", x, numbers[x]);
        sum += numbers[x] * pow(2, x);
    }
    printf("\ndecimal = %f\n", sum);
    return 0;
}
