/*
    * Stanard Input & Output program, we use scanf() and printf() to realise IO with different types of values
    * Author: Hao Hu
    * Date: 2020-10-16
*/
#include <stdio.h>

int main()
{
    int i;
    float x;
    double y;

    i = 40;
    x = 839.26;
    y = 892325.28;

    /* Part of standard Output */
    printf("|%d|%5d|\n", i, i);
    printf("|%f|%.1f|%.2f|%.3f|%.3e|%10.2f|\n", x, x, x, x, x, x);  /* waited to be written by yourself!! */
    printf("|%lf|%.1lf|%5.2f|\n", y, y, y);

    /* Part of standard Input */
    printf("Input an integer value for i: ");
    scanf("%d", & i);
    printf("Input a real value for x: ");
    scanf("%f", & x);
    printf("Input a real value for y: ");
    scanf("%lf", & y);
    
    printf("|%d|%5d|\n", i, i);
    printf("%f\n", x);                                              /* waited to be written by yourself!! */
    printf("%lf\n", y);

    return 0;
}

