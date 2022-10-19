#include <stdio.h>

int main(void)
{
    char c;
    int i;
    float f;
    double d;

    c = 'C';
    i = 10;
    f = 3.14;
    d = 234.5678;

    printf("%c\n", c);
    printf("%d\n", i);
    printf("%f\n", f);
    printf("%f\n", d);

    printf("Print all: %c %d %f %f\n", c, i, f, d);

    printf("This\tis\ta\ttest\n");
    printf("This \ais \aa \atest\n");
    printf("\"C\" is the best\n");

    return 0;
}
