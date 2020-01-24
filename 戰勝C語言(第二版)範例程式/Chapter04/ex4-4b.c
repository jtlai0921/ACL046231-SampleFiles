/* ex4-4b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int level;
    printf("請問你是幾年級的學生(1-5): ");
    scanf("%d", &level);
    if(level == 1)
        printf("你是大一新生\n");
    else if(level == 2)
        printf("你是大二學生\n");
    else if(level == 3)
        printf("你是大三學生\n");
    else if(level == 4)
        printf("你是大四學生\n");
    else if(level == 5)
        printf("你是研究生\n");
    else
        printf("錯誤的代碼!!\n");
    system("PAUSE");
    return 0;
}
