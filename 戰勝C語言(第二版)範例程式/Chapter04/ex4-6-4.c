/* ex4-6-4.c */
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, deter;
    double root1, root2, root;
    printf("請輸入 ax2+bx+c=0 的 a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    deter = pow(b, 2) - 4*a*c;
    if (deter > 0) {
        root1 = (-b+sqrt(deter))/(2*a);
        root2 = (-b-sqrt(deter))/(2*a);
        printf("此方程式的二個相異實根為 %.2f 與 %.2f\n", root1,  
                root2);                              
    }
    else if (deter == 0) {
        root = (-b)/(2*a);
        printf("此方程式的實根為 %.2f\n", root);
    }
    else {
        printf("此方程式沒有實根\n");
    }
    return 0;
}
