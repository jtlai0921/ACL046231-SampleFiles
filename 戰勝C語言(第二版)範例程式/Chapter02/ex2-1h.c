/* ex2-1h.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number1 = 123;
    double number2 = 123.456;
    printf("使用 %%d--------|%d|\n", number1);
    printf("使用 %%10d------|%10d|\n", number1);
    printf("使用 %%-10d-----|%-10d|\n", number1);
    printf("使用 %%2d-------|%2d|\n", number1);
    printf("使用 %%10.2f----|%10.2f|\n", number2);
    printf("使用 %%.2f------|%.2f| \n", number2);
    system("PAUSE");
    return 0;
}
