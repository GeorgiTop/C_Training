#include <stdio.h>

int main(void)
{
    int inputA;
    int inputB;

    printf("Enter two integers: ");
    scanf("%d%d", &inputA, &inputB);

    if (inputA > inputB)
    {
        printf("inputA is bigger than inputB!\n");
    }
    else
    {
        printf("inputA is less than or equal to inputB!\n");
    }

    return 0;
}
