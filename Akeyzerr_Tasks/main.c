// #include <stdio.h>

// void add(int *num) {
//     num += 100;
// }

// int main(void)
// {
//     int b = 5;
//     const int const * x = &b;
    
//     printf("%d\n", x);

//     add(&x);

//     printf("%d\n", x);

//     return 0;

// }

#include <stdio.h>

void add(int *num) {
    num += 100;
}



int main(void)
{
    const int const * x = 5;
    
    printf("%d\n", *x);

    add(x);

    printf("%d\n", *x);

    return 0;

}