/* ex10-3b.c */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char name[20], ans;
    int score;

    printf("請輸入您的大名: ");
    gets(name); /* 使用 gets()來取得字串 */
    do {
        printf("\n請輸入您的分數: ");
        scanf("%d", &score);
        printf("確定嗎 (y/n)? ");
        ans = getche();  /* 使用getche()取得使用者的回答 */
    } while(ans != 'y');

    /* 使用puts()輸出字串 */
    puts("\n\n======================="); 
    printf("    Name: ");
    puts(name); 
    printf("    Score: %d\n", score);
    puts("=======================");
    system("PAUSE");
    return 0;
}
