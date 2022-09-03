#include <stdio.h>

int main(void)
{
    int x;
    
    x = 0;

    while (x < 10)
    {
        printf("%d", x);
        x = x + 1;
    }
    
    printf("\n");

    return 0;
}
