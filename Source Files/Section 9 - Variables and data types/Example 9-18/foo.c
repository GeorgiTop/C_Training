#include <stdio.h>

void foo(void);
void foo1(void);

void foo(void)
{
    extern int x;


    printf("x = %d\n",x);

    x = 20;
}

void foo1(void)
{
    /* Error x is not reachable here */
    /* x = 30; */
}
