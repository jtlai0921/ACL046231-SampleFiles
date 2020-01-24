/* ex3-7a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    short int i = 15;
    short int j = 11;
    printf("i & j = %hx\n", i & j);
    printf("i | j = %hx\n", i | j);
    printf("i ^ j = %hx\n", i ^ j);
    printf("~i = %hx", ~i);
    system("PAUSE");
    return 0;
}
