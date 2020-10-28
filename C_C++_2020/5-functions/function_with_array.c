/***
 * An example program showing how to use array be parameter of a function
 * Author: Hao Hu
 * Date: 2020-10-28
 ***/
#include <stdio.h>

#define SIZE 10

/* define a function to get the sum of values of an integer array */
int sum_int_array(int a[], int n)       /* We use `int a[]` as the way to transfer integer array as parameter; the `n` indicates the size of array */
{
    int sum = 0;

    for(int i = 0; i < n; i++)
        sum += a[i];                    /* use the array as normal */
    
    return sum;
}

int main()
{
    int int_array[SIZE];

    printf("Entering 10 integers: ");
    for(int i = 0; i < SIZE; i++)
        scanf("%d", & int_array[i]);
    
    printf("The sum of these integers is: %d\n", sum_int_array(int_array, SIZE));

    return 0;
}