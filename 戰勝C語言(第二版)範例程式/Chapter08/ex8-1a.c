/* ex8-1a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    /* 定義一指向int資料型態的指標，並觀察其內容 */
    int num = 100;
    int *ptr;      /* ptr是一個指向int的指標 */
    ptr = &num;    /* ptr指向num的位址 */

    /* 印出num的位址及內容 */
    printf("num 在記憶體的位址為 %p\n", &num);
    printf("num 變數值為 %d\n", num);   

    /* 印出ptr變數位址 */
    printf("&ptr is %p\n", &ptr); 

    /* 印出ptr所指向的位址 */
    printf("ptr is %p\n", ptr);

    /* 印出ptr所指向位址的內容  */
    printf("*ptr =  %d\n", *ptr); 
    system("PAUSE");
    return 0;
}
