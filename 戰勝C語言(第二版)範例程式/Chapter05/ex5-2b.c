/* ex5-2b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 1, total = 0;
    while(i <= 100)
    {
        total += i;
        i++;
    }
    printf("1 + 2 + 3 + ... + 100 = %d\n", total);
    system("PAUSE");
    return 0;
}
