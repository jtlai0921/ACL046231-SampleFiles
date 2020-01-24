/* ex11-1a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 宣告學生成績的結構型態 */
    struct student
    {
        char name[20];      /* 學生姓名 */
        int score;          /* 學生成績*/
    } rec1;                 /* 定義結構變數rec1 */
    struct student rec2;    /* 定義結構變數rec2 */

    /* 以sizeof( )計算結構變數rec1與rec2所占記憶體空間 */
    printf("rec1 結構占 %d bytes\n", sizeof(rec1));
    printf("rec2 結構占 %d bytes\n", sizeof(rec2));
    system("PAUSE");
    return 0;
}
