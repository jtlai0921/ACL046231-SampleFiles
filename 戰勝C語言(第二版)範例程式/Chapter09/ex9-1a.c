/* ex9-1a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 定義一指標變數 onePointer，指向int的變數number；
    定義一雙重指標變數twoPointer，指向指標變數onePointer */
    int **twoPointer, *onePointer, number;
    /* 設定number、onePointer及twoPointer */
    number = 100;
    onePointer = &number;
    twoPointer = &onePointer;

    /* 印出number的位址及值 */
    printf("&number: %p \n", &number);
    printf("number: %d\n\n", number);

    /* 印出onePointer的位址及其相關資訊*/
    printf("&onePointer: %p \n", &onePointer);
    printf("onePointer: %p \n", onePointer);
    printf("*onePointer: %d\n\n", *onePointer);

    /* 印出twoPointer的位址及其相關資訊*/
    printf("&twoPointer: %p \n", &twoPointer);
    printf("twoPointer: %p \n", twoPointer);
    printf("*twoPointer: %p \n", *twoPointer);
    printf("**twoPointer: %d\n\n", **twoPointer);

    /* 印出單一與雙重指標占多少bytes */
    printf("onePointer占 %d bytes\n", sizeof(onePointer));
    printf("twoPointer占 %d bytes\n", sizeof(twoPointer));
    system("PAUSE");
    return 0;
}
