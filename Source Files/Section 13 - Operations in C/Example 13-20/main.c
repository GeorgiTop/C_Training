#include <stdio.h>

int main(void)
{
    unsigned char op;
    unsigned char res;

    op = 0x55;
    res = op ^ 0x03;
    printf("res = %#x\n", res);

    return 0;
}
