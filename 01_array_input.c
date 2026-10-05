// A program to read and display integer array values.

#include <stdio.h>

int main()
{
    int a[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Read each value into the array.
    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // Display the values entered by the user.
    printf("\nThe elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
