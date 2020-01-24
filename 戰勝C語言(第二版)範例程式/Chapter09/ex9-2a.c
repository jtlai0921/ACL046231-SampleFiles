/* ex9-2a.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char str[4][20] = {"Department", "of", "Information", 
                        "Management"};
    for (i = 0; i<4; i++){
        printf("str + %d = %p\n", i, str+i);
        printf("*(str + %d) = %p\n", i, *(str+i));
        printf("str[%d] = %p\n\n", i, str[i]);
    }
    system("PAUSE");
    return 0;
}
