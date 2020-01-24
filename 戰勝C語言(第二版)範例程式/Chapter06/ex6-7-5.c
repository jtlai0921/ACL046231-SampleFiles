/* ex6-7-5.c */
#include <stdio.h>
void bmi(double, double);
void bmi(double h, double w)
{
    double BMI = w / ((h/100) * (h/100));
    printf("BMI = %.2f\n", BMI);
    if (BMI < 18.5) {
        printf("體重過輕");
    }
    else if (BMI < 24) {
        printf("正常範圍");
    }
    else if (BMI < 27) {
        printf("體重過重");
    }
    else if (BMI < 30) {
        printf("輕度肥胖");
    }
    else if (BMI < 35)
            printf("體重過輕");
    else
            printf("重度肥胖");
}

int main()
{
    double height, weight;
    printf("請輸入身高: ");
    scanf("%lf", &height);
    printf("請輸入體重: ");
    scanf("%lf", &weight);
    while (height > 0 || weight > 0) {
        bmi(height, weight);
        printf("\n\n");
        printf("請輸入身高: ");
        scanf("%lf", &height);
        printf("請輸入體重: ");
        scanf("%lf", &weight);
    }
    getchar();
    return 0;
}
