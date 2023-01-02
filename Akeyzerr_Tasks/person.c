#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char         name[0xFF];
static unsigned int age;

void set_name( char new_name[0xFF] )
{
    if ( 0 < strlen( new_name ) )
    {
        // printf( "%s\n", new_name );
        memcpy( name, new_name, ( strlen( new_name ) + 1 ) );
        // printf( "%s\n", name );
    }
}

char *get_name( void )
{
    return name;
}