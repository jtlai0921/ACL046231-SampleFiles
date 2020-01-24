/* ex8-1b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int num = 100, *ptr;
    ptr = &num; /* 指定num的記憶體位址給ptr */
    printf("開始時的變數值如下:\n"); 
    printf("num=%d, *ptr=%d\n\n", num, *ptr);

    num = 200;  /* num的值改為200 */
    printf("透過 num=200 更改num變數值\n");
    printf("num=%d, *ptr=%d\n\n", num, *ptr);

    *ptr = 300;    
    printf("也可透過 *ptr=300 更改num變數值\n");
    printf("num=%d, *ptr=%d\n", num, *ptr);
    system("PAUSE");
    return 0;
}
