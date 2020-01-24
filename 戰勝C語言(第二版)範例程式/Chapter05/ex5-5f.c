/* ex5-5f.c */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char ch;
    
    printf("請輸入一數值: ");
    scanf("%d", &num);
    /* 刪除buffer不必要的資料 */
    while (getchar() != '\n') {
        continue;
    }
    
    printf("請輸入一字元: ");
    scanf("%c", &ch);
    printf("num=%d, ch=%c\n", num, ch);
    getchar();
    return 0;
}
