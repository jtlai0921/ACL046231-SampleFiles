/* ex13-2j.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{
    int i, seed;
    printf("請給一新的數值當種子: ");
    scanf("%d", &seed);
    srand(seed);  /* 呼叫seed，重新設定亂數種子 */
    puts("<<產生的亂數如下>>");
    for(i=0; i<MAX; i++)
        printf("%d\n", rand());  /* 呼叫rand，印出亂數 */
    system("PAUSE");
    return 0;
}
