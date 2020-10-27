#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;

    scanf("%d", & score);

    if (score < 60)
        putchar('E');
    else if (score < 70)
        putchar('D');
    else if (score < 80)
        putchar('C');
    else if (score < 90)
        putchar('B');
    else if (score <= 100)
        putchar('A');
    else
        exit(-1);
    
    return 0;
}