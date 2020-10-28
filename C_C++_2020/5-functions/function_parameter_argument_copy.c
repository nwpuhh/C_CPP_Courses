/***
 * An example program to show the copy of arguments to parameter when calling a function
 * Author: Hao Hu
 * Date: 2020-10-28
 ***/
#include <stdio.h>

/* declare a swap function to exchange the two integers */
void swap(int a, int b);

int main()
{
    int a = 1, b = 2;
    printf("Before calling the function swap, a = %d, b = %d\n", a, b);

    /* make the function call of swap for a and b */
    swap(a, b);

    printf("After calling the swap function, a = %d, b = %d\n", a, b); /* It should not be exchanged!! */

    return 0;
}

void swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}