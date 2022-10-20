#include <stdio.h>

int main(void)
{
    char    buffer[40];

    printf("enter ANCI C: ");
    scanf("%s", buffer);   /* Enter ANCI C: ANCI C */
    printf("%s", buffer);   /* Printing only ANCI */
    scanf("%s", buffer);    /* Reading the rest symbols, in this case only C */
    printf("%s\n", buffer);   /* Printing only C */
    
    return 0;
}
