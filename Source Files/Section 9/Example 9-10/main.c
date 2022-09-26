#include <stdio.h>

int main(void)
{
    int x = 10;

    printf("x = %d\n", x);  // prints 10

    {
        int x = 20;
        printf("nested x = %d\n", x);  // prints 20
    }

    printf("x = %d\n", x);  // prints 10

    return 0;
}
