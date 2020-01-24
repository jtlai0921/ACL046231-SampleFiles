/* ex5-1g.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, total = 0;
    for(i=1; i<=100; i++)
        total += i;
    printf("1 + 2 + 3 + ... + 100 = %d\n", total);
    system("PAUSE");
    return 0;
}
