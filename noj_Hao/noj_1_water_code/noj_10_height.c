#include <stdio.h>
#include <math.h>

double distance(double x, double y, double x_t, double y_t)
{
    return sqrt(pow(x - x_t, 2.0) + pow(y - y_t, 2.0));
}

int main()
{
    double x, y;
    scanf("%lf,%lf", &x, &y);

    if (x > 0.0 && y > 0.0)
        printf("%d\n", distance(x, y, 2.0, 2.0) < 1.0 ? 10 : 0);
    else if (x > 0.0 && y < 0.0)
        printf("%d\n", distance(x, y, 2.0, -2.0) < 1.0 ? 10 : 0);
    else if (x < 0.0 && y > 0.0)
        printf("%d\n", distance(x, y, -2.0, 2.0) < 1.0 ? 10 : 0);
    else
        printf("%d\n", distance(x, y, -2.0, -2.0) < 1.0 ? 10 : 0);


    return 0;
}