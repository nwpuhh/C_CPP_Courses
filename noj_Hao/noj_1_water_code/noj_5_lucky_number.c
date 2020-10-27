/**
 * Looking for lucky number, which is equal when it reverse, like 1221, 12321, etc. 
**/
#include <stdio.h>

/**
 * Function of transforming the number entered into an integer array, which returns the nb of digits 
*/
int transform_number_to_digits(int n, int* digits)
{   
    int cnt = 0;
    while(n > 0)
    {
        digits[cnt++] = n % 10;
        n /= 10;
    }
    return cnt; 
}

int main()
{
    int digits[10], cnt, n, flag = 1;

    scanf("%d", &n);

    // call the function defined
    cnt = transform_number_to_digits(n, digits);

    for(int i = 0; i < cnt / 2; i++)
    {
        if(digits[i] != digits[cnt - 1 - i])
        {
            printf("no\n");
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("yes\n");

    return 0;
}