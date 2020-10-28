/**
 * An example program of using function judging a number is prime or not with declaration
 * Author: Hao Hu
 * Date: 2020-10-27
 **/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

/* The declaration of a function, indicating the name, return type and parameters of a function
   but no definition of function. */
Bool is_prime_number(int );         /* We do not need give parameters a name */

int main()
{
    /* Exact as same code as we wrote before */
    int number;
    printf("Enter the number you want to judge as prime: ");
    scanf("%d", & number);

    if(is_prime_number(number))            
        printf("This number is a prime number\n");
    else
        printf("This number is not a prime number\n");
    
    return 0;
}

/* The function definition after the main function */
Bool is_prime_number(int number)
{
    for(int divor = 2; divor * divor <= number; divor++)  
        if(number % divor == 0)
        {
            printf("The divor is %d\n", divor);
            return FALSE;
        }
    return TRUE;             
}
