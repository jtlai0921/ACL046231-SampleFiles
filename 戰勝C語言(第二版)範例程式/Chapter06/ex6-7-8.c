/* ex6-7-8.c */
#include <stdio.h>
#include <math.h>
double distance(int, int, int, int);

int main()
{
    int x1, y1, x2, y2;
    double d;
    printf("請輸入第一個座標點的 x 座標: ");
    scanf("%d", &x1);
    printf("請輸入第一個座標點的 y 座標: ");
    scanf("%d", &y1);
    printf("請輸入第二個座標點的 x 座標: ");
    scanf("%d", &x2);
    printf("請輸入第二個座標點的 y 座標: ");
    scanf("%d", &y2);
    
    while(x1 != -999) {
        d = distance(x1, y1, x2, y2);
        printf("(%d, %d) 與 (%d, %d) 的距離為 %.2f\n\n", x1, y1,   
                    x2, y2, d);
        printf("請輸入第一個座標點的 x 座標: ");
        scanf("%d", &x1);
        printf("請輸入第一個座標點的 y 座標: ");
        scanf("%d", &y1);
        printf("請輸入第二個座標點的 x 座標: ");
        scanf("%d", &x2);
        printf("請輸入第二個座標點的 y 座標: ");
        scanf("%d", &y2);
    }
    getchar();
    return 0;
}

double distance(int x1, int y1, int x2, int y2)
{
    double dist;
    dist = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
    return dist;
}  
