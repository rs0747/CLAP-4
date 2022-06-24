#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    int i;
    ptr = &arr[0];
    printf("Enter array elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("\nEntered array elements are:");
    printf("\nAddress\t\tValue\n");
    for (i = 0; i < 5; i++)
    {
        printf("%08X\t%03d\n", (ptr + i), *(ptr + i));
    }
    return 0;
}
