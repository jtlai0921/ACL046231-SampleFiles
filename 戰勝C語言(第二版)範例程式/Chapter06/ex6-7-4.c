/* ex6-7-4.c */
#include <stdio.h>
int gcd(int, int);
int gcd(int n1, int n2)
{
    int g = 1;
    int k = 2;
    while (k <= n1 &&  k <= n2) {
        if (n1 % k == 0 && n2 % k == 0) {
            g = k;
        }
        k += 1;
    }
    return g;
}

int main()
{
    int a1, b1, a2, b2, a3, b3, GCD;
    printf("請輸入第一個分數，分子為: ");
    scanf("%d", &a1);
    printf("請輸入第一個分數，分母為: ");
    scanf("%d", &b1);

    printf("請輸入第二個分數，分子為: ");
    scanf("%d", &a2);
    printf("請輸入第二個分數，分母為: ");
    scanf("%d", &b2);
    
    a3 = (a1*b2 + a2*b1);
    b3 = (b1*b2);
    GCD = gcd(a3, b3);
    printf("%d/%d + %d/%d = %d/%d\n",a1,b1,a2,b2,a3/GCD,b3/GCD);

    getchar();
    return 0;
}
