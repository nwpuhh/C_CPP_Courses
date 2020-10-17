/*
    * An example of using switch statement to realise the selection
    * Description: Input two integer values indicating the date and month, print the month in string
    * Example: Input: 7/19 Output: 7-th, July
    * Author: Hao Hu
    * Date: 2020-10-17
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month, day;

    printf("Enter date (mm/dd): ");
    scanf("%d /%d", &month, & day);

    /* Part of selection using switch statements */
    switch (day)                        /* switch is for one variable, normally int, or char, or enum*/
    {
        case 1: case 21: case 31:           /* case indicates which condition, we can combine different cases but same operations together */
            printf("%d-st, ", day); break;  /* The break will help the program jump the switch block, otherwise it will continue the operations for other cases */
        case 2: case 22:
            printf("%d-nd, ", day); break;
        case 3: case 23:
            printf("%d-rd, ", day); break;
        default:
            printf("%d-th, ", day); break;
    }

    switch (month)
    {
        case 1: printf("January\n"); break;
        case 2: printf("February\n"); break;
        case 3: printf("March\n"); break;
        case 4: printf("April\n"); break;
        case 5: printf("May\n"); break;
        case 6: printf("June\n"); break;
        case 7: printf("July\n"); break;
        case 8: printf("August\n"); break;
        case 9: printf("Sepetember\n"); break;
        case 10: printf("Octomber\n"); break;
        case 11: printf("Nocember\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Error: The month must be an integer value between 1 to 12\n"); exit(-1); break;
    }

    return 0;
}