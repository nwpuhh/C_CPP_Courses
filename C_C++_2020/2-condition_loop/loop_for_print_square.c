/*
    * Loop program to print the square table using for statement
    * Author: Hao Hu
    * Date: 2020-10-27
*/
#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the size of square table: ");
    scanf("%d", & n);

    /* 
        * Using for statement to print the square table. It contains three parts for(exp1; exp2; exp3), 
        * where exp1 is the statements before entering the loop; exp2 is the condition judging to quit 
        * the loop; exp3 is the statements to do after each iteration in the loop.
    */
    for(i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);
    
    /* Attention, for and while could be exchanged equivalently, therefore, break & continue is also useful in for statements */

    return 0;
}