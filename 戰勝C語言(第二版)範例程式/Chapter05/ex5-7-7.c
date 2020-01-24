/* ex5-7-7.c */
#include <stdio.h>
int main()
{
    int c1=0, c2=0, c3=0, others=0, num, i;
    for (i=1; i<=10; i++) {
        printf("1、小柯\n");
        printf("2、小丁\n");
        printf("3、小姚\n");
        printf("請輸入選號: ");
        scanf("%d", &num);
        switch (num) {
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            default:
                others++;
        }
        printf("小柯: %d, 小丁: %d, 小姚: %d, 廢票: %d\n\n", c1, c2, 
                c3, others);
        }
    return 0;
}
