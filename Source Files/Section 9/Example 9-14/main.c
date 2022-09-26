#include <stdio.h>

void foo(void);

int main(void)
{
    foo();
    foo();
    foo();
    
    return 0;
}

void foo(void)
{
    static int x = 10;

    printf("foo:x = %d\n", x);
    x = x + 1;
}
