/*
Here 1.200000 is printing with, 6 spaces, 
because by giving * in printf we can specify an additional width parameter, 
here ‘pos’ is the width and ‘data’ is the value. 
If the number is smaller than the width then rest is filled with spaces.
*/

#include <stdio.h>
int main()
{
    int pos = 14;
    float data = 1.2;
    printf("%*f",pos,data);
    //123456789ABCDE
    //      1.200000
    return 0;
}
