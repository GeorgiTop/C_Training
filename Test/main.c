#include <stdio.h>

int main(int argc, char* argv[])
{
    myfunc();
    printf("\nYour program name: %s\n", argv[0]);
    return 0;
}

void myfunc(void)
{
    printf("\nHello, Zory!\n");

    return;
}
