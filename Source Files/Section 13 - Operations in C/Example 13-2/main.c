#include <stdio.h>

int main(void)
{
    /* Variable definition */
    char    c;
    int     i;
    float   f;
    double  d;

    /* Substration */
    c = 10 - 3;
    i = 1000 - 300;
    f = 2.23 - 1.23;
    d = 123.234 - 0.1340;

    /* Printing the results from the summing operation */
    printf("Substraction:\n");
    printf("c = %d\ni = %d\nf = %.2f\nd = %f\n", c, i, f, d);

    return 0;
}
