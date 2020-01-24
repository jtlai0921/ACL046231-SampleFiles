/* ex7-4-1b.c */
#include <stdio.h>
int main()
{
    int i, j, k, temp, flag, size;
    int arr[]={80, 30, 40, 70, 50, 60};
    size = sizeof(arr) / sizeof(int);
    printf(".....Before sorted........\n");
    for(i=0; i<=size-1; i++)
        printf("%d ", arr[i]);
    printf("\n");
    for(i=1; i<=25; i++)
        printf("-");
    printf("\n");

    /**********Bubble sort****************/
    for(i=0; i<size-1; i++) {  /* pass 的執行次數是資料的個數(size)減1 */
        flag=0;                 
        for(j=0; j<size-i-1; j++)    
            if(arr[j] > arr[j+1]) {
                flag=1;     /* 當有執行對調的動作時，將flag設為1 */
                temp = arr[j];      
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        printf("#%d pass: ", i+1);  /* 印出每一次pass後的資料 */
        for(k=0; k<size; k++)
            printf("%d ", arr[k]);
        printf("\n");

        /* 若flag 等於0，表示此pass無資料對調，故結束排序的動作 */
        if(flag == 0) 
            break;
    }
    /************************************/
    for(i=1; i<=25; i++)
        printf("-");
    printf("\n");
    printf(".....After sorted.......\n");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
