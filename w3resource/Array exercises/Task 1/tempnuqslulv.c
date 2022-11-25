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

    printf("Elements in array are: ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
