/* ex9-3a.c */
/* 計算二維陣列的總和 */

#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 3
int sum_of_array(int (*arr)[COLS], int);

int main()
{
    int total = 0;
    int array2[ROWS][COLS] = {{1, 3, 5},{2, 4, 6},
                            {7, 9, 11},{8, 10, 12}};

    total = sum_of_array(array2, ROWS*COLS);    
    printf("sume of array = %d\n", total);

    getchar();
    return 0;
}

int sum_of_array(int (*arr)[COLS], int n)
{
    int r, c, tot = 0;
    for(r=0; r<ROWS; r++)
        for(c=0; c<COLS; c++)
            tot += *(*(arr+r)+c);
    return tot;
}
