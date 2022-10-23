#include <stdio.h>

int main(void)
{
    unsigned char op;
    unsigned char res;

    op = 0x01;
    res = op << 7;
    printf("res = %#x\n", res);

    return 0;
}
