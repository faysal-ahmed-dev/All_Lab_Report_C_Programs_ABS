// A program to generate random integers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;
    int a[100];
    printf("Enter No. of Elements: ");
    scanf("%d", &n);
    // Seed the random-number generator once.
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        // Generate and display each random integer.
        a[i] = rand();
        printf("a[%d] : %d\n", i, a[i]);
    }
    return 0;
}
