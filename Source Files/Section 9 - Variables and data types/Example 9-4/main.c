#include <stdio.h>

int main(void)
{
    unsigned char character;
    character = 0;

    while (character <= 127)
    {
        printf("The value %d coresponds to symbol %c\n", character, character);
        character++;
    }
    
    return 0;
}
