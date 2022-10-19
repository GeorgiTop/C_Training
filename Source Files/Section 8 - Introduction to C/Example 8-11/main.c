#include <stdio.h>

int main(void)
{
    int x;
    
    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x > 10) 
    {
        printf("x is bigger than 10\n");
    }
    else
    {
        printf("x is equal or less than 10\n");
    }

    return 0;
}
