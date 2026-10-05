// A program to search for a floating-point value.

#include <stdio.h>

int main()
{
    int n, i, loc, c;
    float a[100], item;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%f", &a[i]);
    }
    while (1)
    {
        loc = -1;
        printf("\nEnter Searching Item: ");
        scanf("%f", &item);
        for (i = 0; i < n; i++)
        {
            // Compare the search item with each array value.
            if (item == a[i])
            {
                loc = i;
                break;
            }
        }
        if (loc == -1)
            printf("\nAbsent");
        else
            printf("\nPresent at Location: %d", loc);
        printf("\nDo you want to continue?\n");
        printf("Press 0 to exit or any value to continue: ");
        scanf("%d", &c);
        if (c == 0)
            return 0;
    }
    return 0;
}
