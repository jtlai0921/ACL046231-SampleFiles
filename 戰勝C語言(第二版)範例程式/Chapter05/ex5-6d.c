/* ex5-6d.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1, total=0;
    do {
        total += i;
    } while (i++ < 100);
    printf("1 + 2 + 3 + ... + 100 = %d, i=%d\n", total, i);
    system("PAUSE");
    return 0;
}
