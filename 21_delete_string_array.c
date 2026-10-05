// A program to delete a string from a string array.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][100];
    int n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the strings:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%s", a[i]);
    }
    printf("\nEnter the position to delete: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
    {
        // Shift later strings left over the deleted string.
        strcpy(a[i], a[i + 1]);
    }
    n--;
    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }
    return 0;
}
