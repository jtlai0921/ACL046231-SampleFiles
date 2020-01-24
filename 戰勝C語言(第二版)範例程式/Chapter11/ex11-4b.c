/* ex11-4b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 宣告結構型態 */
    struct node
    {
        char name[20];
        int  score;
        struct node *next;
    };
    struct node *ptr1, *ptr2, *ptr3, *current;  

    /* 使用malloc()配置記憶體 */
    ptr1 = (struct node *) malloc(sizeof(struct node));
    printf("請輸入ptr1節點的姓名: ");
    scanf("%s", ptr1->name);  
    printf("請輸入ptr1節點的分數: ");
    scanf("%d", &ptr1->score);  

    ptr2 = (struct node *) malloc(sizeof(struct node));
    printf("\n請輸入ptr2節點的姓名: ");
    scanf("%s", ptr2->name);   
    printf("請輸入ptr2節點的分數: ");
    scanf("%d", &ptr2->score);   
    ptr1->next = ptr2;      /* 將 ptr1 的 next 指標指向 ptr2 */

    ptr3 = (struct node *) malloc(sizeof(struct node));
    printf("\n請輸入ptr3節點的姓名: ");
    scanf("%s", ptr3->name);   
    printf("請輸入ptr3節點的分數: ");
    scanf("%d", &ptr3->score);   
    ptr3->next = NULL;       /* ptr3 的 next 指標設為NULL */
    ptr2->next = ptr3;       /* 將 ptr2 的 next 指標指向 ptr3 */

    current = ptr1;
    printf("\n\n縺結串列的資料如下:\n");
    while (current != NULL)
    {
        printf("%10s ", current->name);   
        printf("%5d\n", current->score);   
        current = current->next;
    }
    system("PAUSE");
    return 0;
}
