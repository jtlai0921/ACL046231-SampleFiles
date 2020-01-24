/* ex3-3a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;
    num1 = 60;
    num2 = 30;
    printf("num1 = %d, num2 = %d\n", num1, num2);
    num1 -= num2;
    printf("num1-=num2 => num1 = %d, num2 = %d\n", num1, num2);
    num1 /= num2;
    printf("num1/=num2 => num1 = %d, num2 = %d\n", num1, num2);
    num1 += num2;
    printf("num1+=num2 => num1 = %d, num2 = %d\n", num1, num2);
    num1 *= num2;
    printf("num1*=num2 => num1 = %d, num2 = %d\n", num1, num2);
    num1 %= num2;
    printf("num1%%=num2 => num1 = %d, num2 = %d\n", num1, num2);
    system("PAUSE");
    return 0;
}
