/* ex5-6a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, total = 0;
    while(++i <= 100)
        total += i;
    printf("1 + 2 + 3 + ... + 100 = %d, i=%d\n", total, i);
    system("PAUSE");
    return 0;
}
