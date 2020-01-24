/* ex3-4a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int num = 20, total = 0;
    total = ++num + 30;
    printf("total = %d, num = %d\n", total, num);
    total = 0;
    num = 20;
    total = num++ + 30;
    printf("total = %d, num = %d\n", total, num);
    system("PAUSE");
    return 0;
}
