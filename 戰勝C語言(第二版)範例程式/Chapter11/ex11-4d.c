/* ex11-4d.c */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insert();  
void del();
void list();  

struct student
{
    int id;	                /* ID號碼 */
    char name[10];	       /* 學生姓名 */
    double score;	       /* 學生分數 */
    struct student *next;   /* 指向下一個鏈結 */
};

/* 定義結構指標，head指向第一個鏈結 */
struct student *head, *ptr, *current;

int main()
{
    char option;
    head = (struct student *) malloc(sizeof(struct student));
    head -> next = NULL;    /* head指向的節點不存任何資料 */
    do {
        /* 使用選項讓使用者選擇新增、刪除、列印或結束 */
        printf("\n1 =>新增一節點\n");
        printf("2 =>刪除一節點\n");	
        printf("3 =>列印串列的所有節點\n");
        printf("4 =>結束\n");
        printf("請選擇一項目: ");
        option = getche( );  /* 輸入選項 */	
        puts("");            /* 跳行 */
        switch(option) {
            case '1': insert( );
                    break;
            case '2': del( ); 	
                    break;
            case '3': list( ); 
                    break;
            case '4':	printf("Bye bye!!\n");	
                    break;
            default :	printf("選項錯誤!!\n");	
        }			
    }  while(option != '4');  /* 選擇為3則跳出迴圈 */
    return 0;
}

/* 定義insert()，此函數不接受任何參數，且不傳回任何值 */
/* 新增一筆資料於鏈結串列的前端 */
void insert()
{
    /* 以malloc()函數配置記憶體 */
    ptr = (struct student *) malloc(sizeof(struct student));
    printf("\n<< 加入一學生資料 >>\n");
    printf("ID <int> : ");
    scanf("%d", &ptr->id);
    printf("姓名 <string> : ");	
    scanf("%s", ptr->name);
    printf("分數 <double> : ");	
    scanf("%lf", &ptr->score);

    ptr->next = head->next;
    head->next = ptr;	
}

/* 定義del()，此函數不接受任何參數，且不傳回任何值 */
/* 刪除鏈結串列前端資料 */
void del()
{
        current = head->next ;

        /* 判斷鏈結串列是不是空的 */
        if (current == NULL)
        printf("鏈結串列是空的 !!!\n");
        else {
            head->next = current->next;  /*利用這一敘述將前端的節點除 */ 
            printf("\n<< 被刪除學生的資料如下: >>\n");
            printf("%-10d %-10s %-10.2f\n", 
                    current->id, current->name, current->score); 
            free(current);
        }
}

/* 定義list()，此函數不接受任何參數，且不傳回任何值 */
/* 列印資料於螢幕 */
void list()
{
    if (head->next == NULL)
        printf("目前串列無資料\n");
    else {
        current = head->next;       /* 將node指向head */
        printf("\n<< 目前的串列資料如下: >>\n");
    /* 列印資料直到current為空指標 */	
        while(current != NULL) {
            printf("%-10d %-10s %-10.2f\n",current->id, current->name,
    current->score);
            current = current->next;
        }	
    }
}
