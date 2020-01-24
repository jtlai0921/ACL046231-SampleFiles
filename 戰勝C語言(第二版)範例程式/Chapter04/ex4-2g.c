/* ex4-2g.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("請輸入您的分數: ");
    scanf("%d", &score);
    if(score >= 60) 
    {
        if(score <= 80) 
            score = score +10;
    }
    else
        score= score +5;
    printf("您最後的分數為 = %d\n", score);
    system("PAUSE");
    return 0;
}
