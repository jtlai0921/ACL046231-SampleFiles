/* ex6-6d-1.c */
/* one file of Project*/
#include <stdio.h>
#include <stdlib.h>
int sum();
int i=100, j=200;   
int main()
{
    int total;
    total=sum();
    printf("total=%d\n", total);
    system("PAUSE");
    return 0;
}

/* ex6-6d-2.c */
/* other file of project */
/* 定義sum() */ 
int sum()
{
    extern int i, j;
    return (i+j); 
}
