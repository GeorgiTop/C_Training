#include <stdio.h>

void foo(void);

int x; /* Global variable definition point */

int main(void)
{
    x = 10;

    foo();

    printf("x = %d\n", x);

    return 0;
}
