#include <stdio.h>
int main()
{
    int arr[100], *maximum, size, c, location = 1;
    printf("Enter the number of elements in array\n");
    scanf("%ld", &size);
    printf("Enter %ld integers\n", size);
    for (c = 0; c < size; c++)
    {
        scanf("%d", &arr[c]);
    }
    maximum = arr;
    *maximum = *arr;
    for (c = 1; c < size; c++)
    {
        if (*(arr + c) > *maximum)
        {
            *maximum = *(arr + c);
            location = c + 1;
        }
    }
    printf("Maximum element is present at location number %d and it's value is %d.\n", location, *maximum);
    return 0;
}
