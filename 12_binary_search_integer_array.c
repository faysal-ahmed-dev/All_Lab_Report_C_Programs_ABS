// A program to search an integer array using binary search.

#include <stdio.h>

int main()
{
    int L[100], N, Key;
    int Loc = 0, Beg, End, Mid;
    int i;
    printf("Enter No. of Elements: ");
    scanf("%d", &N);
    printf("\nEnter the elements in ascending order:\n");
    for (i = 1; i <= N; i++)
    {
        printf("L[%d] = ", i);
        scanf("%d", &L[i]);
    }
    printf("\nEnter Searching Item: ");
    scanf("%d", &Key);
    Beg = 1;
    End = N;
    Mid = (Beg + End) / 2;
    // Narrow the search interval until the item is found or absent.
    while (Beg <= End)
    {
        if (Key < L[Mid])
        {
            End = Mid - 1;
        }
        else if (Key > L[Mid])
        {
            Beg = Mid + 1;
        }
        else
        {
            Loc = Mid;
            printf("\nItem is present at Location: %d\n", Loc);
            return 0;
        }
        Mid = (Beg + End) / 2;
    }
    if (Loc == 0)
        printf("\nItem is not in List.\n");
    return 0;
}
