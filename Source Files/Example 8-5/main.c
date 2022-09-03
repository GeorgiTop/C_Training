#include <stdio.h>
int main(void)
{
    /* Заделяне на памет за променлива variable */
    double variable;
    /* На variable се присвоява стойност 10.23 */
    variable = 10.23;
    /* Отпечатай variable */ 
    printf("variable = %f\n", variable); 
    /* !!!Отпечатай variable */
    printf("variable = %d\n", variable); 
    return 0; 
}
