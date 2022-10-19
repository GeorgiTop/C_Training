int main(void)
{
    int x;

    {
        int y = 20, sum;
        sum = x + y;
    }
    /* sum = x + y; */  /* !!!Error, y and sum are not visible in this scope */

    return 0;
}
