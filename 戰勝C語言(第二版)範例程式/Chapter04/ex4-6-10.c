/* ex4-6-10.c */
#include <stdio.h>
int main()
{
    int day = 0, answer;
    printf("你生日的年、月、日的日號有在下面的表格嗎? \n");
    printf(" 1,  3,  5,  7\n");
    printf(" 9, 11, 13, 15\n");
    printf("17, 19, 21, 23\n");
    printf("25, 27, 29, 31\n");
    printf("輸入 1 表示有，輸入 0 表示沒有: ");
    scanf("%d", &answer);
    if (answer == 1)
        day += 1;
    
    printf("\n你生日的年、月、日的日號有在下面的表格嗎? \n");
    printf(" 2,  3,  6,  7\n");
    printf("10, 11, 14, 15\n");
    printf("18, 19, 22, 23\n");
    printf("26, 27, 30, 31\n");
    printf("輸入 1 表示有，輸入 0 表示沒有: ");
    scanf("%d", &answer);
    if (answer == 1)
        day += 2;
    
    printf("\n你生日的年、月、日的日號有在下面的表格嗎? \n");
    printf(" 4,  5,  6,  7\n");
    printf("12, 13, 14, 15\n");
    printf("20, 21, 22, 23\n");
    printf("28, 29, 30, 31\n");
    printf("輸入 1 表示有，輸入 0 表示沒有: ");
    scanf("%d", &answer);
    if (answer == 1)
        day += 4;
    
    printf("\n你生日的年、月、日的日號有在下面的表格嗎? \n");
    printf(" 8,  9, 10, 11\n");
    printf("12, 13, 14, 15\n");
    printf("24, 25, 26, 27\n");
    printf("28, 29, 30, 31\n");
    printf("輸入 1 表示有，輸入 0 表示沒有: ");
    scanf("%d", &answer);
    if (answer == 1)
        day += 8;
    
    printf("\n你生日的年、月、日的日號有在下面的表格嗎? \n");
    printf("16, 17, 18, 19\n");
    printf("20, 21, 22, 23\n");
    printf("24, 25, 26, 27\n");
    printf("28, 29, 30, 31\n");
    printf("輸入 1 表示有，輸入 0 表示沒有: ");
    scanf("%d", &answer);
    if (answer == 1)
        day += 16;
    
    printf("\n你在某年月的 %d 日出生，對吧!\n", day);
    return 0;
}
