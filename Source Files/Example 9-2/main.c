#include <stdio.h>

int main(void)
{
    unsigned int max_uint_32bits;
    unsigned int min_uint_32bits;
    unsigned int j;

    max_uint_32bits = 4294967295; /* Maximal value for 32-bit unsigned int */
    j = max_uint_32bits + 1;      /* Overflow with defined result */
    printf("max_uint_32bits = %u\n", max_uint_32bits);
    printf("The result is well defined -> j = max_uint_32bits + 1 = %u\n\n", j);

    min_uint_32bits = 0;     /* Minimal value for 32-bit unsigned int */
    j = min_uint_32bits - 1; /* Overflow with defined result */
    printf("min_uint_32bits = %u\n", min_uint_32bits);
    printf("The result is well defined -> j = min_uint_32bits - 1 = %u\n\n", j);
    
    return 0;
}
