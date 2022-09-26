#include <stdio.h>
#include "foo.c"

static int x;

void foo(void);

int main(void)
{
    x = 10;

    printf("file1:x %d\n", x);
    foo();
    printf("file1: %d\n", x);

    return 0;
}
