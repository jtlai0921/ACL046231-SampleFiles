/* ex10-3f.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 以另一種方式印出 */
    char str[3][20] = {"iPod", "iMac", "iPhone"};
    int index;
    for(index=0; index<3; index++)   
        printf("字串 %d 為 %s\n", index+1, str+index);
    system("PAUSE");
    return 0;
}
