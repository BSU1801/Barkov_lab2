#include <stdio.h>
#include <math.h>
double f(double x)
{
    double result;
    x <= 3 ? (result = pow(x, 2) - 3 * x + 9) : (result = 1 / (pow(x, 3) + 6));
    return result;
}
