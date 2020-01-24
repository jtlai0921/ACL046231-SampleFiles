/* ex6-5b.c */
#include <stdio.h> 
#include <stdlib.h> 
int factorial(int);
int main()
{
    int num;
    printf("Please input a number: ");
    scanf("%d", &num);
    printf("Factorial(%d)=%d\n", num, factorial(num));
    system("PAUSE");
    return 0;
}

int factorial(int n)
{
    int k, total = 1;
    for (k = 1; k <= n ; k++)
        total *= k;
    return total;
}
