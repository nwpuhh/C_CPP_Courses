/***
 * An example program of checking a number has repeated digits or not. For example, 9123 does not have repated digits, but 91123 has, which is 1.
 * Author: Hao Hu
 * Date: 2020-10-27
 * */
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

int main()
{
    Bool digits_seen[10] = {0};
    long n;
    int digit;

    printf("Enter a number: ");
    scanf("%ld", & n);

    while(n > 0)
    {
        digit = n % 10;         /* storing the last digit of number */
        if(digits_seen[digit])
            break;
        digits_seen[digit] = TRUE;
        n /= 10;
    }

    if(n > 0)
        printf("Reated digit %d\n", digit);
    else
        printf("No repeated digit\n");
    
    return 0;
}