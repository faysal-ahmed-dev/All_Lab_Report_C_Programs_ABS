// A program to count random values greater than 5.5.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n, count = 0;
    float a[100];
    printf("Enter No. of Elements: ");
    scanf("%d", &n);
    srand(time(NULL));
    // Generate each value and count those above the threshold.
    for (i = 0; i < n; i++)
    {
        a[i] = (float)rand() / RAND_MAX * 10;
        printf("a[%d] : %.2f\n", i, a[i]);
        // Increase the count when the value is greater than 5.5.
        if (a[i] > 5.5)
        {
            count++;
        }
    }
    printf("\nNumber greater than 5.5 = %d\n", count);
    return 0;
}
