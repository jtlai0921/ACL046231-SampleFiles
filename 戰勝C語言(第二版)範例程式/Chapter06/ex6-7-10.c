/* ex6-7-10.c */
/* one file of Project*/
/* ex6-7a */
#include <stdio.h>

//函數原型
void printMonth(int year ,int month);
void printMonthTitle(int year , int month);
void printMonthName(int month);
void printMonthBody(int year,int month);
int getStartDay(int year,int month);
int getTotalNumberOfDays(int year,int month);
int getNumberOfDaysInMonth(int year,int month);
_Bool isLeapYear(int year);

int main()
{
    //提示使用者輸入年份
    printf("Enter full year (e.g., 2001): ");
    int year;
    scanf("%d", &year);
    
    //提示使用者輸入月份
    printf("Enter month in number between 1 and 12: ");
    int month;
    scanf("%d", &month);
    
    //印出某年的某一個月的月曆
    printMonth(year, month);
    
    return 0;
}

//印出月曆某年的月份詳細日期
void printMonth(int year,int month)
{
    //Print the headings of the calendar
    printMonthTitle(year,month);
    
    //印出月曆的主體內容
    printMonthBody(year,month);
}

//印出月曆的抬頭如 May, 2015
void printMonthTitle(int year , int month)
{
    printMonthName(month);
    printf( " %d\n", year);
    printf("-------------------------------------\n");
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
}

//印出月份的英文名稱
void printMonthName(int month)
{
    printf("          ");
    switch(month)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
    }
}

//印出月份的主體
void printMonthBody(int year, int month)
{
    //取得某月第一天是星期幾
    int startDay = getStartDay(year, month);
    
    //取得某月的天數
    int numberOfDaysInMonth = getNumberOfDaysInMonth(year,month);
    
    //在月份的第一天前加上一些空白
    int i = 0;
    for(i=0; i<startDay; i++)
        printf("     ");
    
    for(i=1; i<=numberOfDaysInMonth; i++)
    {
        printf("%5d", i);
        if((i + startDay) % 7 == 0)
            printf("\n");
    }
    printf("\n");
}

//取得月份的第一天
int getStartDay(int year, int month)
{
    //取得從1/1/1800到給予年月份的總天數
    int startDay1800  = 3;
    int totalNumberOfDays = getTotalNumberOfDays(year,month);
    
    //回傳開始是星期幾
    return (totalNumberOfDays+startDay1800) % 7;
}

//取得從 January 1, 1800 開始到給予某年某月的天數
int getTotalNumberOfDays(int year, int month)
{
    int total = 0;
    
    //取得從 1800 到 year - 1 的天數
    for(int i=1800; i<year; i++)
        if(isLeapYear(i))
            total=total+366;
        else
            total=total+365;
    
    //再加上從 Jan 到 month - 1 的的天數
    for(int i=1; i<month; i++)
        total = total + getNumberOfDaysInMonth(year, i);
    
    return total;
}

//取得某月的天數
int getNumberOfDaysInMonth(int year, int month)
{
    if(month == 1 || month == 3 || month == 5 || month == 7  ||
        month == 8 || month == 10 || month == 12	)
        return 31;
    
    if(month == 4 || month == 6 || month == 9 || month == 11 )
        return 30;
    
    if (month==2) return isLeapYear(year) ? 29:28;
    
    return 0; //若月份不正確
}

//判斷是否為閏年
_Bool isLeapYear(int year)
{
    return year % 400 == 0 || (year % 4 == 0 && year % 100  != 0);
}
