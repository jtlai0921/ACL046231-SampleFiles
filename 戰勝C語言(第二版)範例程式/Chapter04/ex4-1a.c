/* ex4-1a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("若分數大於等於60分，則再加10分\n");
    printf("請輸入您的分數: ");
    scanf("%d", &score);
    if(score >= 60)   
        score += 10;
    printf("您最後的分數為 %d\n", score);
    system("PAUSE");
    return 0;
}
