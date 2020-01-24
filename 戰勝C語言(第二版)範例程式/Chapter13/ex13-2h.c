/* ex13-2h.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{
    /* 利用rand()函數來產生亂數 */
    int i;
    puts("<<產生的亂數如下>>");
    for(i = 0; i < MAX; i++)
        printf("%d\n", rand());  /* 呼叫rand( ) */
    system("PAUSE");
    return 0;
}
