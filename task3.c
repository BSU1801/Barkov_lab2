#include <stdio.h>
#include <math.h>
_Bool isInArea(double x, double y);
double f(double x);
void main(void)
{
    double x, y;
    int n;
    printf("Choose task1 or task2 \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Complete task1 :\n");
        printf("x = ");
        scanf("%lf", &x);
        printf("y = ");
        scanf("%lf", &y);
        isInArea(x, y);
        printf("%d", isInArea(x, y));
        break;
    case 2:
        printf("Complete task2 :\n");
        printf("x = ");
        scanf("%lf", &x);
        f(x);
        printf("%.3lf", f(x));
        break;
    default:
        printf("Error");
        break;
    }
}
