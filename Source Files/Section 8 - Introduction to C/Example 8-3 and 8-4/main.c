#include <stdio.h>
int main(void)
{
    /* Заделяне на памет за променлива variable */
    int variable; 
    /* На variable се присвоява стойност 10 */ 
    variable = 10; 
    /* Отпечатай variable */ 
    printf("variable = %d\n", variable); 
    /* На variable се присвоява нова стойност -100 */ 
    variable = -100; 
    /* Отпечатай variable */
    printf("variable = %d\n", variable); 
    
    /* Заделяне на памет за променлива variable */ 
    double variable_2;
    /* На variable се присвоява стойност 10.23 */
    variable_2 = 10.23;
    /* Отпечатай variable */ 
    printf("variable = %f\n", variable_2); 
    /* На variable се присвоява нова стойност -0.432 */
    variable_2 = -0.432; 
    /* Отпечатай variable */
    printf("variable = %f\n", variable_2); 

    return 0; 
}
