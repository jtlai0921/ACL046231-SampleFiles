/* ex6-5a.c */
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
    if (n >1)
        return (n * factorial(n-1));
    else 
        return 1;
}
