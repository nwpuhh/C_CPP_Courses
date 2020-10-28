/***
 * Description: Program of calculating the factorial of n (n! = 1*2*3*...*n) using recursive function.
 * 
 * Recursive functions are such functions that call themselves. Two important points of recursive functions:
 *  1. The basic condition: When to terminate the recursive function and return the value in the most basic condition
 *  2. The relationship statment: How to "decrease" the problem size, leading it to the basic condition.
 * 
 * Author: Hao Hu
 * Date: 2020-10-28
 ***/
#include <stdio.h>

/* define the recursive function of calculating the factorial of n, which has basic condition when n <= 1, return 1, else return n*fact(n-1) */
int factorial(int n)
{
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter an integer of calculating the factorial: ");   /* Attetion, n should be smaller than 16 to avoid the overflow of int */
    scanf("%d", &n);

    printf("%d\n", factorial(n));

    return 0;
}
