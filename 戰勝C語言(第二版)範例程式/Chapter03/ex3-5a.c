/* ex3-5a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;
    num1 = 90;
    num2 = 80;
    printf("%d < %d: %d\n", num1, num2, num1 < num2);
    printf("%d <= %d: %d\n", num1, num2, num1 <= num2);
    printf("%d > %d: %d\n", num1, num2, num1 > num2);
    printf("%d >= %d: %d\n", num1, num2, num1 >= num2);
    printf("%d = = %d: %d\n", num1, num2, num1 == num2);
    printf("%d != %d: %d\n", num1, num2, num1 != num2);
    system("PAUSE");
    return 0;
}
