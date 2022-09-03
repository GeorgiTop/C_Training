#include <stdio.h>

int main(void)
{
    int i;
    double d;
    printf("Enter one integer: ");
    scanf("%d", &i);
    printf("You entered %d\n\n", i);
    
    printf("Enter one fractional nvalue: ");
    scanf("%lf", &d);
    printf("You entered %f\n\n", d);
    
    printf("Enter one integer and one fractional value: ");
    scanf("%d%lf", &i, &d);
    printf("You entered %d and %f\n\n", i, d);

    return 0;
}
