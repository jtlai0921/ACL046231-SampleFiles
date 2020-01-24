/* ex9-2b.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str[4] = {"Department", "of", "Information", "Management"};
    printf("*str = %p\n", *str);
    printf("**str = %c\n", **str);
    printf("*(str+2) = %p\n", *(str+2));
    printf("**(str+2) = %c\n", **(str+2));
    printf("*str+2) = %p\n", *str+2);	
    printf("*(*str+2) = %c\n", *(*str+2));
    system("PAUSE");
    return 0;
}
