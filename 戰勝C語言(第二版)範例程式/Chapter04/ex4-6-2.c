/* ex4-6-2.c */
#include <stdio.h>

int main()
{
    double height;
    double weight;

    printf("請輸入身高(公分): ");
    scanf("%lf", &height);

    printf("請輸入體重(公斤): ");
    scanf("%lf", &weight);

    double heightByMeters = height / 100;

    double BMI = weight / (heightByMeters * heightByMeters);
    printf("BMI = %.1f\n\n", BMI);

    if (BMI < 18.5)
        printf("體重過輕\n");
    else if (BMI < 24)
        printf("正常\n");
    else if (BMI < 27)
        printf("過重\n");
    else if (BMI < 30)
        printf("輕度肥胖\n");
    else if (BMI < 35)
        printf("中度肥胖\n");
    else
        printf("重度肥胖\n");
    return 0;
}
