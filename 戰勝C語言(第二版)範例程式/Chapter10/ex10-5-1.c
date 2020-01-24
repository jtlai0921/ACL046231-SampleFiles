/* ex10-5-1.c */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str[5][80];
    char searchString[80];
    _Bool get = false;
    for (int i=0; i<5; i++) {
        printf("請輸入 #%d 個字串: ", i+1);
        scanf("%s", str[i]);
    }
    printf("請輸入你要搜尋的字串: ");
    scanf("%s", searchString);

    for (int j=0; j<5; j++) {
        if (strcmp(searchString, str[j]) == 0) {
            get = true;
            printf("我找到了 %s, 它在索引 %d\n", searchString, j);
            break;
        }
    }
    if (get == false) {
        printf("找不到 %s 字串 \n", searchString);
    }
    getchar();
    return 0; 
}
