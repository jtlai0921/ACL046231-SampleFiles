/* ex5-2a */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 0;
    while(num >= 0)
    {
        printf("請輸入一整數(當此數為負時，將結束迴圈): ");
        scanf("%d", &num);
    }
    printf("結束");
    system("PAUSE");
    return 0;
}
