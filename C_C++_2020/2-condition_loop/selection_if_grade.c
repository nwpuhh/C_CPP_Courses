/*
    * An example of using if statement to realise the selection for printing different grade
    * Description: print the different grades: 0 -> Failing, 1 -> Poor, 2 -> Average, 3 -> Good, 4 -> Execellent
    * Author: Hao Hu
    * Date: 2020-10-17
    *
    * !!Extended version todo: considering value of 0~20 is grade 0, then 20 as step to increase grade, realise the code by switch statements
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter the grade you got: ");
    scanf("%d", & grade);

    /* Part of selection with if-else-if statements */
    if (grade == 4)                               /* Attention, the '==' indicates the operator of equlaity */       
        printf("Execellent\n");                   /* If the block of if/else if/else exists only one statement, no need for {} */
    else if (grade == 3)
        printf("Good\n");
    else if (grade == 2)
        printf("Average\n");
    else if (grade == 1)
        printf("Poor\n");
    else if (grade == 0)
        printf("Failing\n");
    else
    {
        printf("Error: The grade must be int value between 0 to 4\n");
        exit(-1);
    }
    
    return 0;
}