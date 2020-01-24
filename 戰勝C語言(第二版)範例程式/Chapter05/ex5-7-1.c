/* ex5-7-1.c */
#include <stdio.h>
int main()
{
    int numOfPrimes = 100;
    int numOfPrimesOfPerLine = 10;
    int count = 0;
    int number = 2;
    
    printf("前100個質數如下:\n\n");
    while (count < numOfPrimes) {
        int isPrime = 1;
        
        // 測試是否為質數
        for (int divisor=2; divisor<=number/2; divisor++) {
            if (number % divisor == 0) {
                isPrime = 0;
                break;
            }
        }
        
        // 顯示質數，並累加其總數
        if (isPrime) {
            count++;            
            if (count % numOfPrimesOfPerLine == 0)
                printf("%4d\n", number);
            else
                printf("%4d", number);
        }
        
        number++;
    }
    
    getchar();
    return 0;
}
