#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    switch (x)
    {
        case 1:
            printf("You entered 1!\n");
            break;
        case 2:
            printf("You entered 2!\n");
            break;
        case 3:
            printf("You entered 3!\n");
            break;
        default:
            printf("Error!!!\n");
            break;
    }

    return 0;
}
