#include <stdio.h>

int main(void)
{
    signed int max_int_32bits;
    signed int min_int_32bits;
    signed int j;
    
    max_int_32bits = 2147483647; /* Maximal value for 32 bit signed int */
    j = max_int_32bits + 1; /* !!! Overflow with undefined result !!! */
    printf("max_int_32bits = %d\n", max_int_32bits);
    printf("The result is undefined -> j = max_int_32bits + 1 = %d\n\n", j);

    min_int_32bits = -2147483648; /* Minimal value for 32 bit signed int */
    j = min_int_32bits - 1; /* !!! Overflow with undefined result !!! */
    printf("min_int_bits = %d\n", min_int_32bits);
    printf("This result is undefined -> j = min_int_32bits - 1 = %d\n\n", j);

    return 0;
}
