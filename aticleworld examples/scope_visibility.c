#include<stdio.h>
int main()
{
    int data = 10;
    {
        // data indentifier declared in the outer scope is hidden (and not visible) within the inner scope.
        int data = 20;
        printf("%d \n", data);
    }
    printf("%d \n", data);
    return 0;
}
