/* ex8-2b.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char string[10] = "computer";  /* 給定字元陣列（字串）初值 */
    char *ptr = string;     /* 將string第一個元素的位址指定給ptr指標 */
    printf("陣列string的內容是 %s\n", string);

    /* 以下皆輸出陣列第一個元素的記憶體位址 */
    printf("ptr: %p\n", ptr);
    printf("string: %p\n", string);
    printf("&string[0]: %p\n\n", &string[0]);

    /* 以下皆輸出陣列第二個元素的記憶體位址 */
    printf("ptr+1: %p\n", ptr+1);
    printf("string+1: %p\n", string+1);
    printf("&string[1]: %p\n\n", &string[1]);

    /* 以下輸出陣列的內容 */
    printf("*ptr: %c, string[0]: %c\n", *ptr, string[0]);
    printf("*(ptr+1): %c, string[1]: %c\n", *(ptr+1), string[1]);
    printf("*ptr+1: %c, string[0]+1: %c\n", *ptr+1, string[0]+1);   

    system("PAUSE");
    return 0;
}
