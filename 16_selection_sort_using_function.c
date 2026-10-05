// A program to sort integers using selection sort.

#include <stdio.h>

int MIN(int A[], int K, int N)
{
    int min, loc, j;
    min = A[K];
    loc = K;
    for (j = K + 1; j <= N; j++)
    {
        if (min > A[j])
        {
            min = A[j];
            loc = j;
        }
    }
    return loc;
}

int main()
{
    int A[100], N;
    int K, LOC, TEMP;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    printf("\nEnter the elements:\n");
    for (i = 1; i <= N; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    for (K = 1; K <= N - 1; K++)
    {
        // Find the smallest value in the unsorted part of the array.
        LOC = MIN(A, K, N);
        TEMP = A[K];
        A[K] = A[LOC];
        A[LOC] = TEMP;
    }
    printf("\nSorted List in Ascending Order:\n");
    for (i = 1; i <= N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
