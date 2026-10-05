// A program to delete a value from an integer array.

#include <stdio.h>

int main()
{
    int a[100], n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the position to delete: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
    {
        // Shift later values left over the deleted value.
        a[i] = a[i + 1];
    }
    n--;
    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
