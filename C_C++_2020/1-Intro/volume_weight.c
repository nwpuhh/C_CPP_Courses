/*
    * Volume weight calculation program
    * Description: we get the height, length, width of a box, then we calculate the weight of this box.(volume = h*l*w, weight = |-volume / 166-|)
    * Input: Height: int; Length: int; Width: int
    * Author: Hao Hu
    * Date: 2020-10-16
*/
#include <stdio.h>

#define CUBE_IN_PER_LB 166                      /* using #define to define constant value as marco */ 

int main()
{
    /* The part of declaration and initialization */
    int height, length, width, volume;          /* declare some variables of type 'int' to store the information of box, but without the initialization */
    int weight = 0;                             /* declare a variable of int, and initilize it as 0, as the initial weight */

    /* The part of statements */
    printf("Enter height of box: ");
    scanf("%d", &height);                       /* scanf() is the standard function to get the input from keyboard, the %d indicates int type, & name_var
                                                indicates that it will assign the input value to name_var */

    printf("Enter length of box: ");
    scanf("%d", &length);

    printf("Enter width of box: ");
    scanf("%d", &width);

    printf("\nThe height got is: %d, length is %d, width is %d\n", height, length, width);

    volume = height * length * width;
    printf("The volume of box is: %d\n", volume);

    weight = volume / 166;
    printf("The weight got from int divided: %d\n", weight);

    weight = (volume + 165) / 166;
    printf("The weight after we consider the int divided: %d\n", weight);

    weight = (volume + CUBE_IN_PER_LB - 1) / CUBE_IN_PER_LB;                            /* We use the constant value defined in marco */
    printf("The weight after we use constant value defined as marco: %d\n", weight);
    printf("%d\n", &weight);

    return 0;
}