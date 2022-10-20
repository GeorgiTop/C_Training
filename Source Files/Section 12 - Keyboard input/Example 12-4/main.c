#include <stdio.h>

int main(void)
{
    char c;

    printf("Enter text. Pres ENTER to exit: ");
    
    do
    {
        c = getchar();     /* Reading symbol */
        putchar(c);        /* Printing symbol */
    } while (c != '\n');    /* Break statement if input is ENTER */

    putchar('\n'); 

    return 0;

}