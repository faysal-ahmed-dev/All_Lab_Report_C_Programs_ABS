// A program to insert a string into a string array.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][100], value[100];
    int n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the strings:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%s", a[i]);
    }
    printf("\nEnter the position to insert: ");
    scanf("%d", &pos);
    printf("Enter the string to insert: ");
    scanf("%s", value);
    for (i = n; i >= pos; i--)
    {
        // Shift strings right to open the insertion position.
        strcpy(a[i], a[i - 1]);
    }
    strcpy(a[pos - 1], value);
    n++;
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s ", a[i]);
    }
    return 0;
}
