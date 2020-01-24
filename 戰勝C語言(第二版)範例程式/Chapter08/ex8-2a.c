/* ex8-2a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;
    int *ptr = array;  /* 將ptr指向array */

    for(i=0; i<10; i++)
        printf("array[%d]=%3d\n", i, array[i]);  
    printf("\n");

    for(i=0; i<10; i++)
    {
        printf("*(ptr+%d)=%d\n", i, *(ptr+i));
    }
    system("PAUSE");;
    return 0;
}
