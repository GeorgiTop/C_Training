#include <stdio.h>
#include "stdtypes.h"

int main(void)
{
    uint16 cathetus1;
    uint16 cathetus2;
    uint32 hypotenuse;

    printf("Enter values for both cathetus: ");
    scanf("%hu%hu", &cathetus1, &cathetus2);

    hypotenuse = cathetus1*cathetus1 + cathetus2*cathetus2;
    
    printf("hypotenuse = %lu\n", hypotenuse);

    return 0;
}
