/* ex2-1d.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i_num1= 100;
    printf("100%% orange juice\n");

    /* 使用有關整數的格式特定字輸出 */
    printf("輸出 100 使用 %%d: %d\n", i_num1);
    printf("輸出 100 使用 %%x: %x\n", i_num1);
    printf("輸出 100 使用 %%o: %o\n", i_num1);
    system("PAUSE");
    return 0;
}
