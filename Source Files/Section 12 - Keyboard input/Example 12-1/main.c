#include <stdio.h>

int main(void)
{
    int     integer;
    float   floating;

    printf("Enter the sequence 10 10 and pres ENTER:");
    scanf ("%d%f", &integer, &floating);

    printf("integer = %d\nfloating = %.3f\n", integer, floating);

    return 0;
}
