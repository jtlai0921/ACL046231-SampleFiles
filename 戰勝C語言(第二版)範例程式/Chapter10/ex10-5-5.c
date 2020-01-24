/* ex10-5-5.c */
#include <stdio.h>
#include <string.h>

int main() {
    char str[81];
    printf("請輸入一字串: ");
    scanf("%s", str);
    
    int low = 0;
    unsigned long high = strlen(str) - 1;

    _Bool isPalindrome = 1;
    while (low < high) {
        if (str[low] != str[high]) {
            isPalindrome = 0;
            break;
        }
        
        low++;
        high--;
    }
    
    if (isPalindrome) {
        printf("%s is a palindrome", str);
    }
    else
        printf("%s is not a palindrome", str);
    
    return 0;
}
