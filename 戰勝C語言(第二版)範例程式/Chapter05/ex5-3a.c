/* ex5-3a.c */
#include <stdio.h>
#include <stdlib.h>
int main( )
{
    int height;
    double inch;
    do {
        printf("請問您的身高幾公分? ");
        scanf("%d", &height);
    } while(height < 0);  /* 身高若負，則要求重新輸入 */
    height /= 2.54;       /* 將公分轉為英吋 */
    printf("你的身高是 %d 呎 %d 吋\n", height/12, height%12); 
            /*一呎等於12吋 */
    system("PAUSE");
    return 0;
}
