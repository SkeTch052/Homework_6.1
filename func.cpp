#include "func.h"

double sum(double x, double y) { return x + y; }
double sub(double x, double y) { return x - y; }
double multi(double x, double y) { return x * y; }
double divis(double x, double y) { return x / y; }
double power(double x, double y)
{
    double result = 1;
    int loop;
    if (y < 0) {
        loop = -1 * y;
    } else {
        loop = y;
    }
    for (int i = 0; i < loop; ++i) {
        result *= x;
    }
    if (y < 0) {
        result = 1 / result;
    }
    return result;
}