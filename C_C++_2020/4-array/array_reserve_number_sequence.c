/***
 * An example of using array to reserve a number sequence in size 10 of int
 * Author: Hao Hu
 * Date: 2020-10-27
 **/
#include <stdio.h>

#define N 10                    /* define a marco indicating the length of array */

int main()
{
    int squence[N], i;                  /* int squence[N] is an array name of `squence` of length 10 containing 10 variables of int(all are random values) */
    int array_init[] = {1,2,3,4,5,6,7,8,9,10};    /* Array could be initilized with {} without indicating the size */
    int array_init_zero[N] = {0};       /* Another way of initilizing all variables in the array as 0 */

    printf("Print the table of two array initilized: \n");
    for(i = 0; i < N; i++)
        printf("%10d%10d\n", array_init[i], array_init_zero[i]);

    /* Standard operation of initilizing the array with for statements */
    for(i = 0; i < N; i++)
        squence[i] = 0;         /* Attention, the valid index range of array of size N is [0, N-1], the index of the first item of an array is 0! */

    /* Standard operation of printing all items in an array */
    printf("Print the intialized sequence: ");
    for(i = 0; i < N; i++)
        printf("%d ", squence[i]);
    printf("\n");

    /* Standard operation of setting values for an array */
    printf("Enter 10 numbers to store in the squence: ");
    for(i = 0; i < N; i++)
        scanf("%d", &squence[i]);

    /* Standard operation of printing all items in an array */
    printf("Print the original sequence: ");
    for(i = 0; i < N; i++)
        printf("%d ", squence[i]);
    printf("\n");

    /* We print the reversed sequence */
    printf("Print the reserved sequence: ");
    for(i = N - 1; i >= 0; i--)
        printf("%d ", squence[i]);
    printf("\n");

    return 0;
}