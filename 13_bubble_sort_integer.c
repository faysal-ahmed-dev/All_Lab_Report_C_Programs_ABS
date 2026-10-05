// A program to sort integers using bubble sort.

#include <stdio.h>

int main()
{
    int A[100], n, k, i, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    /* Bubble Sort */
    // Swap adjacent values that are out of ascending order.
    for (k = 1; k <= n - 1; k++)
    {
        for (i = 0; i < n - k; i++)
        {
            if (A[i] > A[i + 1])
            {
                /* Interchange */
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
    printf("\nSorted List in Ascending Order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
