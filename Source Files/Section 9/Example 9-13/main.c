#include <stdio.h>

void print_value(register int val);

int main(void)
{
    register int x;

    x = 10;
    print_value(x);

    return 0;
}

void print_value( register int val)
{
    printf("The value is %d\n", val);
}
