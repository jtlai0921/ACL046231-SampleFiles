/* ex2-1c.c */
#include <stdio.h>
#include <conio.h>
int main()
{
    char letter1 = 'a';
    char letter2 = 'b';
    char letter3 = 'c';
    char letter4 = 't';
    printf("%c %c %c are known by everyone\n", letter1, letter2, 
            letter3);
    printf("I have a %c%c%c\n", letter3, letter1, letter4);
    getch();
    return 0;
}
