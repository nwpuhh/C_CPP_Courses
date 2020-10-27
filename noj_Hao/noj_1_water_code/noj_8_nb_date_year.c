/**
 * Find the number of day for a specific date in specific year
 **/
#include <stdio.h>

int judge_is_leap_year(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
        return 1;
    else if (year % 400 == 0)
        return 1;
    else 
        return 0;
}

int main()
{
    int year, month, day, nb_day_year = 0;

    int common_year_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leap_year_months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};    

    scanf("%d-%d-%d", &year, &month, &day);

    //printf("%d\n", judge_is_leap_year(year));

    for(int i = 0; i < month - 1; i++)
        nb_day_year += judge_is_leap_year(year) ? leap_year_months[i] : common_year_months[i];
    
    nb_day_year += day;

    printf("%d\n", nb_day_year);

    return 0;
}