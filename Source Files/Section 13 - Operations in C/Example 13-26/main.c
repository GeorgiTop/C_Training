#include <stdio.h>

int main(void)
{
    printf("char has %d bytes\n", sizeof(char));
    printf("short has %d bytes\n", sizeof(short));
    printf("int has %d bytes\n", sizeof(int));
    printf("long has %d bytes\n", sizeof(long));
    printf("float has %d bytes\n", sizeof(float));
    printf("double has %d bytes\n", sizeof(double));

    printf("1 + 2 has %d bytes\n", sizeof(1 + 2));
    printf("2.2 + 3.5 has %d bytes\n", sizeof(2.2+3.5));

    return 0;
}
