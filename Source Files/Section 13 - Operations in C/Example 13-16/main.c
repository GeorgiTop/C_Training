#include <stdio.h>

int main(void)
{
    int res;

    res = !10; /* Result is 0 */
    printf("!10 = %d\n", res);
    res = !0; /* Result is 1 */
    printf("!0 = %d\n", res);

    return 0;
}
