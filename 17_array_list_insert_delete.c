// A program to insert and delete array list elements.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* UDF Prototypes */

int insert(int a[], int n);

int deleteValue(int a[], int n);

void display(int a[], int n);

int main() {
    int a[100], i, n, choice;
    printf("\nEnter No. Of Elements: ");
    scanf("%d", &n);
    srand(time(NULL));
    /* Array Initialization with random numbers */
    for (i = 0; i < n; i++) {
        // Fill the initial array with random values.
        a[i] = rand() % 100;
    }
    display(a, n);
    for (;;) {
        printf("\n\n--- MENU ---");
        printf("\n1. Insert Element");
        printf("\n2. Delete Element");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            n = insert(a, n);
        }
        else if (choice == 2)
        {
            n = deleteValue(a, n);
        }
        else if (choice == 3)
        {
            printf("\nExiting Program...\n");
            break;
        }
        else
        {
            printf("\nInvalid choice! Please try again.");
        }
    }
    return 0;
}
/* Display Function */

void display(int a[], int n)
{
    int i;
    printf("\nCurrent Array Elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
/* UDF for Inserting Element */

int insert(int a[], int n)
{
    int i, item, loc;
    printf("\nEnter Inserting Location: ");
    scanf("%d", &loc);
    if (loc < 0 || loc > n)
    {
        printf("\nInvalid Location!");
        return n;
    }
    printf("Enter Inserting Item: ");
    scanf("%d", &item);
    for (i = n - 1; i >= loc; i--)
    {
        // Shift values right to make room for the new item.
        a[i + 1] = a[i];
    }
    a[loc] = item;
    n = n + 1;
    printf("\nList after Insert:");
    display(a, n);
    return n;
}
/* UDF for Deleting Element */

int deleteValue(int a[], int n)
{
    int i, loc;
    if (n == 0)
    {
        printf("\nArray is empty! Nothing to delete.");
        return n;
    }
    printf("\nEnter Deleting Location: ");
    scanf("%d", &loc);
    if (loc < 0 || loc >= n)
    {
        printf("\nInvalid Location!");
        return n;
    }
    for (i = loc; i < n - 1; i++)
    {
        // Shift later values left to close the deleted position.
        a[i] = a[i + 1];
    }
    n = n - 1;
    printf("\nList after Delete:");
    display(a, n);
    return n;
}
