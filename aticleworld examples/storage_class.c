#include<stdio.h>
int main()
{
    // error: multiple storage classes in declaration specifiers
    typedef auto int myAutoInt;
    // typedef already consider as partial storage class
    
    myAutoInt data = 4;
    printf("%d",data);
    return 0;
}