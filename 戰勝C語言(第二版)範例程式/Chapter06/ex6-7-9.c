/* ex6-7-9.c */
#include <stdio.h>
double celToFah(int);

int main() 
{
    int i;
    double fah;
    printf("%6s %9s\n", "攝氏", "華氏");
    for(i=0; i<=100; i+=5) {
        fah = celToFah(i);
        printf("%-6d %6.2f\n", i, fah);
    }
    getchar();
    return 0;
}

double celToFah(int cel)
{
    double f;
    f = cel * (9/5.) + 32;
    return f;
}
