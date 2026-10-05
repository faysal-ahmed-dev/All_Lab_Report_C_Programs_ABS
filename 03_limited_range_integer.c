// A program to generate random integers from 100 to 999.

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
        // Keep each generated integer between 100 and 999.
        a[i] = rand() % 900 + 100;
        printf("a[%d] : %d\n", i, a[i]);
    }
    return 0;
}
