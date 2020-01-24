/* ex10-5-4 */
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[80];
    long int len;
    int decimal=0;
    printf("請輸入一個十六進位的字串: ");
    scanf("%s", str);
    len = strlen(str);
    
    for (long int i=0; i<=len-1; i++) {
        switch (str[i]) {
            case 'A':
            case 'a':
                decimal += 10 * pow(16, len-i-1);
                break;
            case 'B':
            case 'b':
                decimal += 11 * pow(16, len-i-1);
                break;
            case 'C':
            case 'c':
                decimal += 12 * pow(16, len-i-1);
                break;
            case 'D':
            case 'd':
                decimal += 13 * pow(16, len-i-1);
                break;
            case 'E':
            case 'e':
                decimal += 14 * pow(16, len-i-1);
                break;
            case 'F':
            case 'f':
                decimal += 15 * pow(16, len-i-1);
                break;
            case '0':
                decimal += 0 * pow(16, len-i-1);
                break;
            case '1':
                decimal += 1 * pow(16, len-i-1);
                break;
            case '2':
                decimal += 2 * pow(16, len-i-1);
                break;
            case '3':
                decimal += 3 * pow(16, len-i-1);
                break;
            case '4':
                decimal += 4 * pow(16, len-i-1);
                break;
            case '5':
                decimal += 5 * pow(16, len-i-1);
                break;
            case '6':
                decimal += 6 * pow(16, len-i-1);
                break;
            case '7':
                decimal += 7 * pow(16, len-i-1);
                break;
            case '8':
                decimal += 8 * pow(16, len-i-1);
                break;
            case '9':
                decimal += 9 * pow(16, len-i-1);
                break;
        }
    }
    printf("%s 其十進位的值為　%d\n", str, decimal);
    return 0;
}
