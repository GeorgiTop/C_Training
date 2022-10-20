#include <stdio.h>

int main(void)
{
    int op1, op2;
    int res;

    op1 = 20;
    op2 = 10;
    res = (op1 > op2) && (op2 != 0);

    printf("res = %d\n", res);

    return 0;
}
