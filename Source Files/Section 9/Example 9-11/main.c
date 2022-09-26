#include <stdio.h>

int x = 10;

int main(void)
{
    printf("global x = %d\n", x);

    {
        int x = 20;
        printf("local x = %d\n", x);
    }

    printf("global x = %d\n", x);

    return 0;
}
