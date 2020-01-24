/* ex4-5c.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 將範例4-4b的else-if敘述更改為switch敘述，並
        將int改為char型態，示範switch在字元常數下的用法 */
    char level;   
    printf("請問你是幾年級的學生(1…5): ");
    scanf("%c", &level);
    switch(level)
    {
        case '1': printf("你是大一新生\n");
                break;
        case '2': printf("你是大二學生\n");
                break;
        case '3': printf("你是大三學生\n");
                break;
        case '4': printf("你是大四學生\n");
                break;
        case '5': printf("你是研究生\n");
                break;
        default: printf("錯誤的代碼!!\n");
    }
    system("PAUSE");
    return 0;
}
