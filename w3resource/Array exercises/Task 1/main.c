/*
1. Write a program in C to store elements in an array and print it. Go to the editor
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/

#include <stdio.h>
#define SIZE 10

int main(void)
{
    int arr[SIZE];
    printf("Input 10 elements in the array :\n");

    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
