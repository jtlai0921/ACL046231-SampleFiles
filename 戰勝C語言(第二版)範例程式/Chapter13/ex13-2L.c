/* ex13-2L.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    struct tm *ptrnow;   
    time_t loc_now, std_now;  
    time(&loc_now);   
    time(&std_now);   
    ptrnow = localtime(&loc_now);  /* 呼叫localtime() */
    printf("區域時間: %s", asctime(ptrnow));   
    ptrnow = gmtime(&std_now);     /* 呼叫gmtime() */
    printf("標準時間: %s", asctime(ptrnow));   
    system("PAUSE");
    return 0;
}
