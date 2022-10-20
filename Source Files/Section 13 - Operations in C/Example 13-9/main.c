#include <stdio.h>

int main(void)
{
    int x;
    int y;

    x = 1;
    y = ++x;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
