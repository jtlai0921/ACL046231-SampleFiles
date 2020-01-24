/* ex10-3g.c */
#include <stdio.h>
#include <stdlib.h>
void output(char []);  
int main()
{
    char str1[] = "Good", str2[] = " idea\n";
    /* 以字串為參數，呼叫函數output() */
    output(str1);
    output(str2);
    system("PAUSE");
    return 0;
}

void output(char str[])
{
    printf("%s", str);   
}
