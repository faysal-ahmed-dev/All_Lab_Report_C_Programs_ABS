// A program to insert a value into an integer array.

#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the position to insert: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for (i = n; i >= pos; i--)
    {
        // Shift values right to open the insertion position.
        a[i] = a[i - 1];
    }
    a[pos - 1] = value;
    n++;
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
