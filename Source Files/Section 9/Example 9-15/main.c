#include <stdio.h>

void foo(void);

static int x;

int main(void)
{
    x = 10;
    foo();

    return 0;
}
