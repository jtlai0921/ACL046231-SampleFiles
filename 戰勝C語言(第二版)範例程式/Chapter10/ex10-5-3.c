/* ex10-5-3.c */
#include <stdio.h>
void strcmpUser(char [], char []);

int main()
{
    char str1[80];
    char str2[80];
    printf("請輸入一字串： ");
    gets(str1);
    printf("請再輸入一字串： ");
    gets(str2);
    strcmpUser(str1, str2);
    getchar();
    return 0;
}

void strcmpUser(char str1[], char str2[])
{
    int i=0;
    while (str1[i] == str2[i]) {
        i++;
        if (str1[i] == '\0' && str2[i] == '\0') {
            printf("%s 等於　%s", str1, str2);
            break;
        }
    }
    if (str1[i] > str2[i]) {
        printf("%s 大於　%s", str1, str2);
    }
    else {
        printf("%s 小於　%s", str1, str2);
    }
}
