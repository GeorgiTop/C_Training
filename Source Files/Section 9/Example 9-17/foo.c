#include <stdio.h>

extern int x;

void foo(void)
{
    printf("x = %d\n",x);

    x = 20;
}
