/* ex5-7-2.c */
#include <stdio.h>
int main() 
{
    int num1, num2;
    printf("請輸入第一個數字: ");
    scanf("%d", &num1);
    
    printf("請輸入第二個數字: ");
    scanf("%d", &num2);
    
    int gcd = 1;
    int n = 2;
    while (n <= num1 && n <= num2) {
        if (num1 % n == 0 && num2 % n == 0) {
            gcd = n;
        }
        n++;
    }
    
    printf("%d 與 %d 的最大公因數是: %d\n", num1, num2, gcd);
    
    system("PAUSE");
    return 0;
}
