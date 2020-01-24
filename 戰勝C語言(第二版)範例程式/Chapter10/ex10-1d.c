/* ex10-1d.c */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    /* 選擇輸出使用getche() */
    char option;
    do {
        printf("\n");
        printf("1) iPod nano\n");
        printf("2) iPhone \n");
        printf("3) iMac\n");
        printf("請選擇您要的商品(1..3) 或 q 結束: ");
        option = getche();  /* 使用getche()來接收選項 */
        switch(option)  /* switch敘述 */
        {
            case '1': printf("\n您選擇的商品是 iPod nano\n");
                    break;
            case '2': printf("\n您選擇的商品是 iPhone\n");
                    break;
            case '3': printf("\n您選擇的商品是 iMac\n");
                    break;
            case 'q': exit(0);
            default:  printf("\n沒有這樣商品，請重新輸入 !!!\n");
        }
    } while(option != 'q');
    system("PAUSE");
    return 0;
}
