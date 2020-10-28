/***
 * The most common function usage. An example program of using function to judge a number is prime number or not
 * Author: Hao Hu
 * Date: 2020-10-27
 * */
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

/*
 * Description: This is a function definition of judging a number is prime or not. If it is prime, return TRUE, else FALSE
 * Input: number : int (called parameters)
 * Output: Bool
 * Attention: The function definition is before the `main` function of program
*/
Bool is_prime_number(int number)
{
    for(int divor = 2; divor * divor <= number; divor++)    /* we try all divors from 2 to sqrt(number), if it could be divided, it means it is not prime */
        if(number % divor == 0)
        {
            printf("The divor is %d\n", divor);
            return FALSE;
        }
    return TRUE;                                            /* if it could finish the loop, which indicates there is no divor excepting 1 & itself, so prime*/
}

int main()
{
    int number;
    printf("Enter the number you want to judge as prime: ");
    scanf("%d", & number);

    /* We call the function defined before */
    if(is_prime_number(number))             /* This line contains a function call, which gives a `argument` as the value of `parameter` to the function */
        printf("This number is a prime number\n");
    else
        printf("This number is not a prime number\n");
    
    return 0;
}