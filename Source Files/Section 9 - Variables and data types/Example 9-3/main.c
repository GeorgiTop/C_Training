#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /* Lower threshold of the temp scale / Долна граница на температурната скала */
    upper = 100; /* Upper threshold of the temp scale / Горна граница на температурната скала */
    step = 10;   /* Scale step up / Размер на стъпката */
    fahr = lower;

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);                /* Temperature calculation /Изчисляване на температурата */
        printf("%.0f^F ----------> %.2f^C\n", fahr, celsius); /* Console print / Отпечатване */
        fahr = fahr + step;                                   /* Step increment by step / Увеличаване на температурата с една стъпка */
    }

    return 0;
}
