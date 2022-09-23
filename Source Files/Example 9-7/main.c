void set_x(void);
int get_x(void);

int main(void)
{
    int i;

    set_x();
    i = get_x();
    /* i = x; */    /* !!!Error, x is not in the scope of the program block */
    
    return 0;
}

int x;
void set_x(void)
{
    x = 10;
}

int get_x(void)
{
    return x;
}
