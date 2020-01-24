/* ex8-2c.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr = num;
    printf("&num[0]=%p, num=%p\n", &num[0], num);
    printf("ptr: %p\n", ptr);
    printf("*ptr: %d\n\n", *ptr);

    ++ptr;  
    printf("ptr=%p\n", ptr);
    printf("*ptr: %d\n", *ptr);
    printf("*(ptr-1): %d\n", *(ptr-1));
    printf("*(ptr+1): %d\n", *(ptr+1));
    system("PAUSE");
    return 0;
}
