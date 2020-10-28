/***
 * Program of quick sort algorithm to describe the usage of recursive function for "divide-and-conquer".
 * The brief idea of quick sort:
 *  1. choose an item in the array as the pivot to make the partition, make some swap operation so that the items in
 *     left of pivot are smaller than pivot, and items in right of pivot are greater than pivot.
 *  2. recursively solve the left part to make the sort.
 *  3. recursively solve the right part to make the sort.
 * Author: Hao Hu
 * Date: 2020-10-28
 ***/
#include <stdio.h>
#include <assert.h>

/* declare two functions: one to realise the partition with first item as pivot, the other is the recursive function quicksort */
int partition_pivot(int *int_array, int lower, int upper);

void quicksort(int *int_array, int lower, int upper);

int main()
{
    int len, int_array[100];

    printf("Enter an integer (smaller than 100) to set the length of integer array: ");
    scanf("%d", & len);

    printf("Enter %d integers to build the int array: ", len);
    for(int i = 0; i < len; i++)
        scanf("%d", & int_array[i]);

    quicksort(int_array, 0, len - 1);

    /* print the sorted array */
    for(int i = 0; i < len; i++)
        printf("%d ", int_array[i]);
    printf("\n");

    return 0;
}

/**
 * The definition of split fuction for quick sort => different partition methods could be used!
**/
int partition_pivot(int *int_array, int lower, int upper)
{
    int pivot = int_array[lower];

    while(1)
    {
        while(lower < upper && pivot <= int_array[upper])
            upper--;
        
        if(lower >= upper)  break;
        int_array[lower++] = int_array[upper];

        while (lower < upper && int_array[lower] <= pivot)
            lower++;
        
        if(lower >= upper) break;
        int_array[upper--] = int_array[lower];
        
    }
    int_array[upper] = pivot;
    return upper;
}

void quicksort(int *int_array, int lower, int upper)
{
    if (lower >= upper) return;
    int middle = partition_pivot(int_array, lower, upper);
    quicksort(int_array, lower, middle - 1);
    quicksort(int_array, middle + 1, upper);
}