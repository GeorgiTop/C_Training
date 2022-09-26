#include <stdio.h>
#include "foo.c"

void foo(void);

static int x;

int main(void)
{
    x = 10;
    foo();

    return 0;
}
