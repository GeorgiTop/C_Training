#include <stdio.h>

int main(void)
{
    /*Variable definition*/
    char    c;
    int     i;
    float   f;
    double  d;

    /* Console print - hint */
    printf("Plrease enter values for c, i, f and d: ");

    /* Reading user input */ 
    scanf("%c%d%f%lf", &c, &i, &f, &d);
    /* Printing inputed data */
    printf("%c %d %f %f\n", c, i, f, d);

    return 0;
}
