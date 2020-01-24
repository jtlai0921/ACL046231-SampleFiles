/* ex13-3b.c */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
    srand((unsigned) time(NULL));
    int number = rand() % 101;
    
    printf("猜一猜介於 0~100 的數字");
    int guess = -1;
    
    while (guess != number) {
        printf("你猜多少: ");
        scanf("%d", &guess);
        
        if (guess == number)
            printf("Bingo, 你猜對了");
        else if (guess > number)
            printf("你猜的數字太大了");
        else
            printf("你猜的數字太小了");

    }
    return 0;
}
