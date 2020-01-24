/* ex5-5e.c */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char ch;
    
    printf("請輸入一數值: ");
    scanf("%d", &num);
    printf("請輸入一字元: ");
    scanf("%c", &ch);
    
    printf("num=%d, ch=%c\n", num, ch);
    getchar();
    return 0;
}
