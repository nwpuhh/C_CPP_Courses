/**
 * An example program of using sizeof() function to show the number of Bytes used for varaibles of different types.
 * Author: Hao Hu
 * Date: 2020-10-27
 **/
#include <stdio.h>

int main()
{
    /* declare and define variables of different types */
    /* Part 1: different types of integers */
    int int_i;                                      /* normal int, 2 or 4 Bytes, in 16-bits, the aviable value is between -32768 to 32767; in 32-bits, -2147483648 to 2147483647*/ 
    short int short_int_i;                          /* short int, 2 Bytes, in 16-bits, same value slack as int, which is -32768 to 32767. It could be shorten write as short */
    unsigned short int u_short_int_i;               /* unsigned short int, 2 Bytes, only has positive values. 0 to 65535 */
    unsigned int u_int_i;                           /* unsigned int, 2 or 4 Bytes, only has positive values. 0 to 65535(16-bits) or 0 to 4294967295(32-bits) */
    long int long_int_i;                            /* long int, two times of size of normal int */
    unsigned long int u_long_int_i;                 /* unsigned long int*/

    printf("The size of int: %lu\n", sizeof(int_i));  // sizeof() return the `unsigned long int` type
    printf("The size of short: %lu\n", sizeof(short_int_i));
    printf("The size of unsigned short: %lu\n", sizeof(u_short_int_i));
    printf("The size of unsigned int: %lu\n", sizeof(u_int_i));
    printf("The size of long: %lu\n", sizeof(long_int_i));
    printf("The size of unsigned long: %lu\n", sizeof(u_short_int_i));

    /* Part 2: two different types of real numbers */
    float float_i;                                  /* normal float, it follows the IEEE float standard. Value slack: 1.17 * 10^(-38) to 3.40 * 10^38, with 6 points as precise */
    double double_i;                                /* double-precise float, value slack: 2.22 * 10^(-308) to 1.79 * 10^308, with 15 points as precise */
    long double long_double_i;                      /* Almost no use.... Just mention there is such type of float */

    printf("The size of float: %lu\n", sizeof(float_i));
    printf("The size of double: %lu\n", sizeof(double_i));
    printf("The size of long double: %lu\n", sizeof(long_double_i));

    /* Part 3: characters */
    char char_i;                                    /* 1 Byte, check ASCII table for the value-character projection */
    printf("The size of char: %lu\n", sizeof(char_i));

    return 0;
}