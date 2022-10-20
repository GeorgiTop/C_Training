#include <stdio.h>

int main(void)
{
    int i_numerator;
    int i_denominator;
    double quotient, d_numerator, d_denominator;

    i_numerator = 10;
    i_denominator = 3;
    quotient = i_numerator / i_denominator;
    printf("quotient = %.2f\n", quotient);

    d_numerator = 10.0;
    d_denominator = 3.0;
    quotient = d_numerator / d_denominator;
    printf("quotient = %.2f\n", quotient);

    return 0;
}
