/* ex8-1d.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 測試一指標變數所占記憶體空間，並與基本型態變數比較 */
    printf("char 占 %d bytes\n", sizeof(char));
    printf("int 占 %d bytes\n", sizeof(int));
    printf("float 占 %d bytes\n", sizeof(float));  
    printf("double 占 %d bytes\n\n", sizeof(double));

    printf("char * 占 %d bytes\n", sizeof(char *));
    printf("int * 占 %d bytes\n", sizeof(int *));
    printf("float * 占 %d bytes\n", sizeof(float *));
    printf("double * 占 %d bytes\n", sizeof(double *));
    system("PAUSE");
    return 0;
}
