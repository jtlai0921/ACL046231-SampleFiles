/* ex13-2i.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define random(num) (rand() % (num))
int main(void)
{
    /* 利用random()巨集來產生亂數 */
    int i, range;
    printf("最大的亂數值為: ");
    scanf("%d", &range);
    puts("<<產生的亂數如下>>");
    for(i = 0; i < MAX; i++)
        printf("%d\n", random(range)+1);  
    system("PAUSE");
    return 0;
}
