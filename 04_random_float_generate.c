// A program to generate random floating-point values.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;
    float a[100];
    printf("Enter No. of Elements: ");
    scanf("%d", &n);
    // Seed the random-number generator once.
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        // Scale a random value to the range from 0 to 10.
        a[i] = (float)rand() / RAND_MAX * 10;
        printf("a[%d] : %.2f\n", i, a[i]);
    }
    return 0;
}
