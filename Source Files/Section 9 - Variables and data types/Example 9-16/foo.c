#include <stdio.h>

static int x;

void foo(void)
{
    x = 20;
    printf("file2:x = %d\n", x);
}
