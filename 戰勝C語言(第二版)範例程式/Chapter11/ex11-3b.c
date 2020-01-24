/* ex11-3b.c */
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int id;
    char name[10];
    double score;
};
struct student classes[10];
int i = 0;

void create();  /* create()函數的原型定義 */
void list();    /* list()函數的原型定義 */
int main()
{
    char option;
    do {
        printf("\n1 => 新增一筆學生資料\n");
        printf("2 => 列印學生資料\n");
        printf("3 => 結束\n");
        printf("請輸入選擇項: ");
        option = getchar();  /* 輸入選項 */
        while(getchar() != '\n')
            continue;       /* 刪除buffer不必要的資料 */
        switch(option)
        {
            /* 選項1呼叫create()函數做新增工作 */
            case '1': create();
                        break;
            /* 選項2呼叫list()函數做列印工作 */
            case '2': list();
                    break;
            case '3': printf("Bye bye!!\n");
                    break;
            default : printf("選項錯誤!!\n");
        }
    }  while(option != '3');  /* 選擇為3則跳出迴圈 */
    system("PAUSE");
    return 0;
}

/* 定義 create()函數 */
void create()
{
    if (i >= 10) {
        printf("陣列已滿\n");
        return;
    }
    
    printf("\n<< 加入一學生資料 >>\n");
    printf("ID: ");
    scanf("%d", &classes[i].id);
    
    printf("姓名: ");
    scanf("%s", classes[i].name);
    
    printf("分數: ");
    scanf("%lf", &classes[i].score);
    while(getchar() != '\n')
        continue;       /* 刪除buffer不必要的資料 */
    
    i++;
}

/* 定義list()函數 */
void list()
{
    int n;
    printf("\n<< 學生資料如下: >>\n");
    /* 利用for迴圈將結構陣列中的資料一一列出 */
    for(n=0; n<i; n++)
        printf("%-10d  %-10s %5.1f\n", classes[n].id,
                classes[n].name, classes[n].score);
}
