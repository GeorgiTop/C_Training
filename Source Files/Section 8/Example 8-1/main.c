#include <stdio.h>
#include <stdlib.h>

void myfunc(void);

int main(void)
{
    myfunc();
    system("pause");
    /* printf("Hello, World!\n") */

    return 0;
}

void myfunc(void)
{
    printf("First C program\n");
    
    return;
}
