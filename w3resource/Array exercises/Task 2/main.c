/*
2. Write a program in C to read n number of values in an array and display it in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/

#include <stdio.h>

int main(void)
{
    int n_elements;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n_elements);

    int arr[n_elements];
    printf("Input %d elements in the array :\n", n_elements);

    int i;
    for (i = 0; i < n_elements; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values store into the array are :\n");

    for (i = 0; i < n_elements; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe values store into the array in reverse are :\n");

    int array_end = n_elements - 1;
    int *p;
    for (p = &arr[array_end]; p >= &arr[0]; p--)
    {
        printf("%d ", *p);
    }

    return 0;
}
