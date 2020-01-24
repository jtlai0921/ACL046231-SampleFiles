/* ex5-7-11.c */
#include <stdio.h>
int main()
{
    int n=1;
    while (n*n*n < 15000) {
        n++;
    }
    printf("%d 的 3 次方大於等於 15000\n", n);
    return 0;
}
