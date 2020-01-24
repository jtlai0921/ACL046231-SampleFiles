/* ex13-2k.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define random(num) (rand() % (num))
#define randomize() srand((unsigned) time(NULL))
int main()
{
    int i, range;
    printf("最大的亂數值為: ");
    scanf("%d", &range);  /* 輸入亂數範圍 */
    puts("<<產生的亂數如下>>");
    randomize();  /* 以randomize()設定亂數種子 */
    for(i = 0; i < MAX; i++)
        printf("%d\n", random(range)+1);  
    system("PAUSE");
    return 0;
}
