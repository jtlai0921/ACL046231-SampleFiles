/* ex5-7-10.c */
#include <stdio.h>
int main() {
    int i;
    double F;
    for (i=0; i<=100; i+=5) {
        F = i * (9./5) + 32;
        printf("攝氏溫度%3d 等於F華氏溫度 %.2f\n", i, F);
    }
    return 0;
}
