// A program to solve the Tower of Hanoi problem.

#include <stdio.h>

int n;

void Tower(int n, char bg, char ax, char ed)
{
    // The base case moves one disk directly to its destination.
    if (n == 1)
    {
        printf("\n%c ----> %c", bg, ed);
    }
    else
    {
        // Move the smaller stack aside before moving the largest disk.
        Tower(n - 1, bg, ed, ax);
        printf("\n%c -------> %c", bg, ed);
        Tower(n - 1, ax, bg, ed);
    }
}

int main()
{
    printf("\nEnter Number of Disks: ");
    scanf("%d", &n);
    Tower(n, 'a', 'b', 'c');
    return 0;
}
