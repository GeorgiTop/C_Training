void set_x(void);

int main(void)
{
    int x;
    x = 10;
    /*...*/
    return 0;
}

void set_x(void)
{
    /* x = 10; */   /*  !!!Error, x can not be seen outside of main() */
}
