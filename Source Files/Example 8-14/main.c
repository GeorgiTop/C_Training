#include <stdio.h>

int main(void)
{
    int x;
    
    x = 0;

    do
    {
        printf("%d", x);
        x += 1;
    } while (x < 10);
    
    printf("\n");

    return 0;
}
