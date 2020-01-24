/* ex4-6-5.c */
#include <stdio.h>
#include <math.h>
int main()
{
    int pointX, pointY, radius;
    double dist;

    printf("請輸入x、y座標: ");
    scanf("%d %d", &pointX, &pointY);
    printf("請輸入圓的半徑: ");
    scanf("%d", &radius);
    dist = sqrt(pow(pointX, 2) + pow(pointY, 2));
    if (dist <= radius) {
        printf("點座標(%d, %d)在圓內\n", pointX, pointY);
    }
    else {
        printf("點座標(%d, %d)不在圓內\n", pointX, pointY);
    }
    return 0;
}
