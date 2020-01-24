/* ex5-3b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 1, total = 0;
    do { 
        total += i;
        i++;
    }while (i <= 100);
    printf("1 + 2 + 3 + ... + 100 = %d\n", total);
    system("PAUSE");
    return 0;
}
