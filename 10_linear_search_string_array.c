// A program to search a string array.

#include <stdio.h>
#include <string.h>

int main()
{
    int i, loc = -1, n, c;
    char a[100][100], item[100];
    printf("Enter No. of Elements: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%s", a[i]);
    }
    printf("\nEnter Searching Item: ");
    scanf("%s", item);
    for (i = 1; i <= n; i++)
    {
        // Compare the search item with each stored string.
        if (strcmp(item, a[i]) == 0)
        {
            loc = i;
            break;
        }
    }
    if (loc == -1)
        printf("\nAbsent\n");
    else
        printf("\nPresent at Location: %d\n", loc);
    printf("\nPress 0 for exit or any value to continue: ");
    scanf("%d", &c);
    if (c == 0)
        return 0;
    return 0;
}
