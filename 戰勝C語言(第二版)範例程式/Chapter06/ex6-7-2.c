/* ex6-7-2.c */
#include <stdio.h>
void printStar(int);
void multiply();

int main()
{
    printStar(72);
    multiply();
    printStar(72);
    return 0;
}

void printStar(int n)
{
    int i;
    for(i=1; i<=n; i++) {
        printf("*");
    }
    printf("\n");
}

void multiply()
{
    int i, j;
    for(i=1; i<=9; i++) {
        for(j=1; j<=9; j++) {
            printf("%d*%d=%2d  ", j, i, i*j);
        }
        printf("\n");
    }
}
