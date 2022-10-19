#include <stdio.h>

void func(void);

int main(void)
{
    extern int x;

    x = 10;
    func();
    printf("x = %d\n", x);

    return 0;
}

int x;

void func(void)
{
    printf("x = %d\n", x);
    x = 20;
}
