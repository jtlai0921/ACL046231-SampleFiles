/* ex5-7-3.c */
#include <stdio.h>
int main() 
{
    int i, j;
    /* 印出標頭 */
    printf("            9 * 9 乘法表\n\n");
    printf("    ");
    for (i = 1; i <= 9; i++) {
        printf("%4d", i);
    }
    printf("\n");
    
    /* 印出虛線 */
    for (int n = 1; n <= 40; n++)
        printf("-");
    printf("\n");
    
    /* 印出乘法表的內文 */
    for (i = 1; i <= 9; i++) {
        printf("%d | ", i);
        for (j = 1; j <= 9; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }
    
    system("PAUSE");
    return 0;
}
