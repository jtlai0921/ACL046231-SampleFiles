/* ex5-7-9 */
#include <stdio.h>
int main() {
    int i;
    double km;
    for (i=50; i<=100; i+=5) {
        km = i * 1.6;
        printf("%3d 公哩等於 %.2f\n", i, km);
    }
    return 0;
}
