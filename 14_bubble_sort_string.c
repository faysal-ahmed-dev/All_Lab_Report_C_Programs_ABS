// A program to sort strings using bubble sort.

#include <stdio.h>
#include <string.h>

int main()
{
    char A[100][100], temp[100];
    int n, k, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the strings:\n");
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%s", A[i]);
    }
    /* Bubble Sort */
    for (k = 1; k <= n - 1; k++)
    {
        for (i = 0; i < n - k; i++)
        {
            // Swap neighboring strings when they are out of order.
            if (strcmp(A[i], A[i + 1]) > 0)
            {
                /* Interchange */
                strcpy(temp, A[i]);
                strcpy(A[i], A[i + 1]);
                strcpy(A[i + 1], temp);
            }
        }
    }
    printf("\nSorted List in Ascending Order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s ", A[i]);
    }
    return 0;
}
