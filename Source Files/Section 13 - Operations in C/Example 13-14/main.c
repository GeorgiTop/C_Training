#include <stdio.h>

int main (void)
{
    int res;

    res = 0 || 0; /* Result is 0 */
    printf("0 and 0 gives %d\n", res);

    res = 0 || 10; /* Result is 1 */
    printf("0 and 10 gives %d\n", res);

    res = 10 || 0; /* Result is 1 */
    printf("10 and 0 gives %d\n", res);

    res = 10 || 20; /* Result is 1 */
    printf("10 and 20 gives %d\n", res);

    return 0;
}
