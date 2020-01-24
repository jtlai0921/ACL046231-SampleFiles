/* ex4-6-6.c */
#include <stdio.h>
int main()
{
    int num;
    printf("請輸入一整數(1~15): ");
    scanf("%d", &num);
    switch (num) {
        case 10:
            printf("十六進位是 A\n");
            break;
        case 11:
            printf("十六進位是 B\n");
            break;
        case 12:
            printf("十六進位是 C\n");
            break;
        case 13:
            printf("十六進位是 D\n");
            break;
        case 14:
            printf("十六進位是 E\n");
            break;
        case 15:
            printf("十六進位是 F\n");
            break; 	        
        default:
            if (num >= 1 && num <= 15) {
                printf("十六進位是 %d\n", num);
            }
            else {
                printf("無效的輸入\n");
            }
    }
    return 0;
}
