/* ex7-4-8.c */
#include <stdio.h>
void isbn11();

int main()
{
    isbn11();
    getchar();
    return 0;
}

void isbn11()
{
    int n[14];
    int i, total=0, checkNum;
    for(i=1; i<=9; i++) {
        printf("請輸入第 %d 個數字: ", i);
        scanf("%d", &n[i]);
        total += n[i]*i;
    }
    checkNum = total  % 11;

    for(i=1; i<=9; i++) {
        printf("%d", n[i]);
    }
    if (checkNum == 10) {
        printf("X");
    }
    else {
        printf("%d", checkNum);
    }
    printf("\n");
}
