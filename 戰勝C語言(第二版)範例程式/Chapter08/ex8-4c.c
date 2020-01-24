/* ex8-4c.c */
/* 計算二維陣列的每一列和每一行的總和 */
#include <stdio.h>
#include <stdlib.h>
#define ROWS 4
#define COLS 3
void sum_rows(int arr[][COLS], int);
void sum_cols(int arr[][COLS], int);
int main()
{
    int array[ROWS][COLS] = {{1, 3, 5},{2, 4, 6},{7, 9, 11},{8, 10, 12}};
    sum_rows(array, ROWS);
    sum_cols(array, COLS);
    system("PAUSE");
    return 0;
}

void sum_rows(int arr[][COLS], int rows)
{
    int r, c, total;
    for(r=0; r<rows; r++){
        total = 0;
        for(c=0; c<COLS; c++)
            total += arr[r][c];
        printf("row %d : sum = %d\n", r, total);
    }
    printf("\n");
}

void sum_cols(int arr[][COLS], int rows)
{
    int r, c, total;
    for(c=0; c<COLS; c++){
        total = 0;
        for(r=0; r<rows; r++)
            total += arr[r][c];
        printf("col %d : sum = %d\n", c, total);
    }
}
