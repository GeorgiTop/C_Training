#include <stdio.h>

double multiply (double a, double b);

int main(void)
{
    int i, j; /* Деклариране на две променливи тип int */
    double x, y, z; /* Деклариране на три променливи тип double */

    i = 4;
    j = i + 7; /* Стойността на израза i+7 се присвоява на j*/
    x = 9.087;
    x = x * 4.5; /* Стойността на израза x*4.5 се присвоява на x */
    y = x / 1.4; /* Стойността на израза x/1.4 се присвоява на y */
    printf("i = %d\nj = %d\nx = %g\ny = %f\n", i, j, x, y);
    z = multiply(x + 3, y - 3); /* Използване на изразите x+3 и y-3 за аргументи */
    printf("z = %f\n", z);

    return 0;
}

double multiply(double a, double b)
{
    return a * b; /* Връщане на стойността на израза a*b като резултат */
}
