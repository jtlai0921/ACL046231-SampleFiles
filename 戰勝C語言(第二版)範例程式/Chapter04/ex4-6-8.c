/* ex4-6-8.c */
#include <stdio.h>
int main()
{
    int number, palindrome;
    printf("請輸入三位數的整數: ");
    scanf("%d", &number);
    if (number > 1000) {
        printf("輸入無效數字\n");
    }
    else {
        palindrome = (number % 10) * 100 + (number / 10 % 10) * 
                        10 + (number / 100);
        
        if (number == palindrome) {
            printf("%d 是一迴文數字\n", number);
        }
        else {
            printf("%d 不是迴文數字\n", number);
        }
    }
    return 0;
}
