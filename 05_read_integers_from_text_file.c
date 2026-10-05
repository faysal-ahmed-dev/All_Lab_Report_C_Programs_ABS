// A program to read integer values from a text file.

#include <stdio.h>

int main()
{
    FILE *myFile;
    // Open the source text file for reading.
    myFile = fopen("d:\\Shouvojit.txt", "r");
    if (myFile == NULL)
    {
        printf("Error: File-ti pawa jayni!\n");
        return 1;
    }
    int a[100], i;
    // Read and print up to nine integer values.
    for (i = 0; i < 9; i++)
    {
        if (fscanf(myFile, "%d", &a[i]) != 1)
        {
            printf("File-e porjaptoshongkhok data nei.\n");
            break;
        }
        printf("Number [%d]: %d\n", i, a[i]);
    }
    fclose(myFile);
    return 0;
}
