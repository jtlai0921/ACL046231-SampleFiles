/* ex6-7-1.c */
#include <stdio.h>
void printStar();
void multiply();
int main()
{
    printStar();
    multiply();
    printStar();
    return 0;
}

void printStar()
{
    int i;
    for(i=1; i<=72; i++) {
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
