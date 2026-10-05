// A program to count even and odd input values.

#include <stdio.h>

int main()
{
    int n, i, num;
    int even = 0, odd = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        // Classify each input number by its remainder when divided by 2.
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Total Even Numbers = %d\n", even);
    printf("Total Odd Numbers = %d\n", odd);
    return 0;
}
