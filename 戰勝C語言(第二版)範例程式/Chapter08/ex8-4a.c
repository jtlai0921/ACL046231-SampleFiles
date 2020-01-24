/* ex8-4a.c */
#include <stdio.h>
#include <stdlib.h>
int sum(int [], int);
/* 計算陣列所有元素的和 */
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int total, n, i;

    /* 計算arr陣列中有多少元素*/
    n=sizeof(arr)/sizeof(arr[0]);
    total = sum(arr, n);
    for(i=0; i<n; i++)
        printf("arr[%d]=%d\n", i, arr[i]);
    printf("\n");

    printf("陣列的總和 : %d\n", total);
    system("PAUSE");
    return 0;
}

int sum(int p[], int num)
{
    int i , total=0;
    for(i =0; i < num; i++)
        total += p[i);
    return total;
}
