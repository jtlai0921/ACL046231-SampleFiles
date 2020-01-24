/* ex5-3c.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 建立選單，讓使用者輸入選項完成該選項工作 */
    int option, no1, no2;
    /* 此選單有三個功能：1為加法，2為減法，3則跳出程式 */
    do {
        printf("\n");
        printf("1 => 加的運算\n");
        printf("2 => 減的運算\n");
        printf("3 => 結束\n");
        printf("請選擇 (1-3): ");
        scanf("%d", &option);
        switch(option)  /* 使用switch選擇敘述來執行各項功能 */
        {
            case 1: printf("請輸入兩個整數: ");
                    scanf("%d %d", &no1, &no2);
                    printf("%d + %d is %d\n", no1, no2, no1+no2);
                    break;
            case 2: printf("請輸入兩個整數: ");
                    scanf("%d %d", &no1, &no2);
                    printf("%d - %d is %d\n", no1, no2, no1 - no2);
                    break;
            case 3: printf("再見!!");
                    break;
                    default: printf("錯誤的選擇!!\n");
        }
    } while(option != 3);  /* 使用者輸入3則結束迴圈 */  
    system("PAUSE");
    return 0;
}
