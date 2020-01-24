/* ex13-3a.c */
//大樂透號碼
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define randomize() srand((unsigned) time(NULL))
#define random(x) rand() % (x)

int main() 
{
    int a[50] = {0};
    int i=0, y;
    randomize();
    printf("\n大樂透號碼: ");
    
    for(; i<6; ) {
        y = random(49)+1;
        if (a[y] == 0) {
            a[y] = y;
            printf("%5d", y);
            i++;
        }        
    }

    printf("\nDone\n");
    getchar();
    return 0;
}
