#include <stdio.h>

int main(void)
{
    signed char numerator;
    signed char denominator;
    signed char quotient;
    signed char reminder;

    numerator = 10;
    denominator = 3;

    quotient = numerator / denominator;
    reminder = numerator % denominator;

    printf("quotient = %d\n", quotient);
    printf("reminder = %d\n", reminder);

    return 0;
}
