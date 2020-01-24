/* ex5-7-5.c */
#include <stdio.h>
int main(int argc, const char * argv[])
{
    int n1, d1, n2, d2, n3, d3;
    int gcd = 1, n = 2;
    
    printf("請輸入一分數的分子和分母(n1/d1): ");
    scanf("%d/%d", &n1, &d1);
    printf("請輸入一分數的分子和分母(n2/d2): ");
    scanf("%d/%d", &n2, &d2);
    d3 = d1 * d2;
    n3 = n1 * d2 + n2 * d1;
    printf("%d/%d + %d/%d = %d/%d\n", n1, d1, n2, d2, n3, d3);
    
    while (n <= n3 && n <= d3) {
        if (n3 % n == 0 && d3 % n == 0) {
            gcd = n;
        }
        n++;
    }
    printf("gcd 為: %d\n", gcd);
    printf("最簡分數為: \n");
    printf("%d/%d + %d/%d = %d/%d\n", n1, d1, n2, d2, n3/gcd, d3/gcd);
    
    return 0;
}
