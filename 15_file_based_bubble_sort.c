// A program to sort file values using bubble sort.

#include <stdio.h>

int main()
{
    FILE *inputFile, *outputFile;
    int a[100], n = 0;
    int i, j, temp;
    /* 1. Open input file in read mode */
    inputFile = fopen("d:\\input.txt", "r");
    /* Check if the input file was opened successfully */
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt!\n");
        return 1;
    }
    /* 2. Read all integer values from the file into an array */
    // Read integer values from the input file.
    while (fscanf(inputFile, "%d", &a[n]) != EOF) {
        n++;
    }
    /* Close the input file after reading */
    fclose(inputFile);
    /* 3. Bubble Sort Algorithm (Ascending Order) */
    // Sort the values into ascending order.
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                /* Swap elements */
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    /* 4. Open output file in write mode */
    outputFile = fopen("d:\\output.txt", "w");
    /* Check if the output file was created successfully */
    if (outputFile == NULL)
    {
        printf("Error: Could not create output.txt!\n");
        return 1;
    }
    /* 5. Write sorted elements to output file */
    for (i = 0; i < n; i++)
    {
        fprintf(outputFile, "%d\n", a[i]);
    }
    /* Close the output file */
    fclose(outputFile);
    printf("Successfully read %d numbers, sorted, and saved to output.txt\n", n);
    return 0;
}
