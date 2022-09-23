int main(void)
{
    int x;
    const int y = 10;
    const char c = 'A';

    x = 20;          /* Value x is now 20, allowed change */
    /* y = 20; */   /* !!!Error, y can not change */
    /* c = 'B'; */  /* !!!Error, c can not change */

    return 0;
}
