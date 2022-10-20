#include <stdio.h>

int main(void)
{
    /* Variable definition */
    char    c;
    int     i;
    float   f;
    double  d;

    /* Summing opperation */
    c = 1 + 2;
    i = 1000 + 300;
    f = 2.344 + 3.0;
    d = 123.234 + 84654.1340;

    /* Printing the results from the summing operation */
    printf("Addition:\n");
    printf("c = %d\ni = %d\nf = %.2f\nd = %f\n", c, i, f, d);

    return 0;
}
