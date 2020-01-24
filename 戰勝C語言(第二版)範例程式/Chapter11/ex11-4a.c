/* ex11-4a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 宣告結構型態 */
    struct student
    {
        char name[20];
        int score;    
    };
    struct student *ptr;  /* 定義結構指標ptr */

    /* 使用malloc()配置記憶體 */
    ptr = (struct student *) malloc(sizeof(struct student));
    printf("請輸入學生的姓名: ");
    gets(ptr->name);  
    printf("請輸入學生的成績: ");
    scanf("%d", &ptr->score);   
    printf("\n學生的姓名是 %s\n", ptr->name);  
    printf("成績為 %d\n", ptr->score);  
    system("PAUSE");
    return 0;
}
