/*
    * An example of using if statement to realise the selection
    * Description: Calculate the fee for buying stocks:
    *   |  Trade Count  |     Fee       |
    *   |    < 2500     |  30 + 1.7%    |
    *   | 2500 ~ 6250   |  56 + 0.66%   |
    *   | 6250 ~ 20000  |  76 + 0.34%   |
    *   | 20000 ~ 50000 |  100 + 0.22%  |
    *   | 50000~500000  |  155 + 0.11%  |
    *   |  > 500000     |  255 + 0.09%  | 
    *   The smallest fee is 39
    * Author: Hao Hu
    * Date: 2020-10-17
*/
#include <stdio.h>

int main()
{
    float trade_count, fee_value, fee_value_temp;

    printf("Enter the value of trade: ");
    scanf("%f", &trade_count);

    /* Part of selection by using if condition */
    if (trade_count < 2500.0)     /* The value calculated of condition is 0 or 1, in C, 1 indicates 'True', which pass the judge, otherwise in reverse */
    {
        fee_value = 30.0 + 0.017 * trade_count;
        //fee_value = 30 + 0.17 * trade_count;   /* int is automaticlly reverted into float */
    }
    else if (trade_count < 6250.0)   /* else-if indicates it did not pass the last condition, and need a new judge */
    {
        fee_value = 56.0 + 0.0066 * trade_count;
    }
    else if (trade_count < 20000.0)
    {
        fee_value = 76 + 0.0034 * trade_count; 
    }
    else if (trade_count < 50000.0)
    {
        ; //waited to be finished
    }
    else
    {
        ; // waited to be finished
    }

    fee_value_temp = fee_value;

    if (fee_value_temp < 39.0)
        fee_value = 39.0;    
    printf("The fee value is %f\n", fee_value);

    fee_value = fee_value_temp < 39.0 ? 39.0 : fee_value;   /* ternary operator x = (exp1 ? exp2 : exp3), if exp1 is True, then assign exp2 to x, else exp3 */
    printf("The fee value using ternary operator is %f\n", fee_value);

    return 0;
}