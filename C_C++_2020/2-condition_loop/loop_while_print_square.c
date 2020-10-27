/*
    * Loop program to print the square table using while statement
    * Author: Hao Hu
    * Date: 2020-10-17
*/
#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the size of square table: ");
    scanf("%d", & n);

    i = 1;
    while (i <= n)                            /* while statement, if i <= n is True, then continue the loop, attention of the dead loop */
    {
        printf("%d: ", i);
        printf("%10d%10d\n", i, i * i);
        i += 2;                               /* i++ is the operator of self adding 1, it equals to i = i+1 */
    }

    /* Another way of realising this program with dead loop but with a break */
    printf("Print the same square table but using dead loop with break\n");
    //i = 1;                                    /* reset the counter as 1 */
    while(1)                                  /* while(1) is a dead loop, indicating it will never jump out until there is break */
    {
        if (i == n)
            break;                            /* jump out from the loop forcely */
        else
        {
            printf("%10d%10d\n", i, i * i);
            i += 1000;
        }
    }

    return 0;
}