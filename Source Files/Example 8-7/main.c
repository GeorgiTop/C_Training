#include <stdio.h>

double add(double a, double b);

int main(void)
{
    double res;

    res = add(2.3, 5.6);
    printf("res = %f\n", res);
    res = add(10.2, 12.9);
    printf("res = %f\n", res);

    return 0;
}

double add(double a, double b)
{
    double sum;

    sum = a + b;
    return sum;
}
