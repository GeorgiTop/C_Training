#include <stdio.h>

int main(void)
{
    unsigned char op;
    unsigned char res;

    op = 0x8F;
    res = op & 0xFE;

    printf("res = %#x\n", res);

    return 0;
}
