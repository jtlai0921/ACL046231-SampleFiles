/* ex4-2f.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    printf("Please input a score: ");
    scanf("%d", &score);
    if(score >= 60)
        if(score <= 80)
            score = score + 10;
    else
        score = score + 5; 
    printf("score = %d\n", score);
    system("PAUSE");
    return 0;
}
