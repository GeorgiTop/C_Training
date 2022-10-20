#include <stdio.h>

int main(void)
{
    char    c;
    int     i;
    float   f;
    double  d;
    
    c = 2 * 3;
    i = 100 * 2;
    f = 2.0 * 1.23;
    d = 123.56 * 0.0987;

    printf("Multiplication:\n");
    printf("c = %d\ni = %d\nf = %f\nd = %f\n\n\n", c, i, f, d);

    return 0;
}
