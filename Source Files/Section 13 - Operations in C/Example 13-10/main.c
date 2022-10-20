#include <stdio.h>

int main(void)
{
    int op1, op2;
    int res;

    op1 = 10;
    op2 = 20;

    res = op1 > op2;
    printf("%d > %d gives %d\n", op1, op2, res);
    
    res = op1 < op2;
    printf("%d < %d gives %d\n", op1, op2, res);
    
    res = op1 == op2;
    printf("%d == %d gives %d\n", op1, op2, res);
    
    res = op1 != op2;
    printf("%d != %d gives %d\n", op1, op2, res);

    return 0;
}
