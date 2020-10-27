#include <stdio.h>

int main()
{
    int sum = 0, n = 0, i;

    while(n < 10)
    {
        scanf("%d", & i);
        if (i == 0) 
        {   
            printf("i is 0\n");
            continue;   /* miss this iteration */
        }
        sum += i;
        n++;
    }

    printf("%d\n", sum);

    return 0;
}