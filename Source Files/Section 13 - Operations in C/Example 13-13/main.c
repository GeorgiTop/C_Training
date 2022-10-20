#include <stdio.h>

int foo1(void);
int foo2(void);

int main(void)
{
    int i;

    i = foo1() && foo2();

    return 0;
}

int foo1(void)
{
    int res;

    printf("Inside foo1().\n");
    printf("Enter 1 or 0: ");
    scanf("%d", &res);

    return res;
}

int foo2(void)
{
    printf("Inside foo2().\n");

    return 0;
}
