/* ex10-3e.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 宣告字串陣列，並設定初值 */
    char str[2][20] = {"Microsoft", "Windows 10"};
    int index;
    for(index=0; index<2; index++)  
        printf("字串 %d 為 %s\n", index+1, str[index]);
    system("PAUSE");
    return 0;
}
