#include <stdio.h>

int main(void)
{
    unsigned short character;
    character = 0;

    while (character <= 255)
    {
        printf("The value %d coresponds to symbol %c\n", character, character);
        character++;
    }
    
    return 0;
}
