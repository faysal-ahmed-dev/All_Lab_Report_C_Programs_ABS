// A program to write integer values to a text file.

#include <stdio.h>

int main()
{
    int num;
    FILE *fptr;
    // Open the output text file for writing.
    fptr = fopen("d:\\program.txt", "w");
    if (fptr == NULL)
    {
        printf("Error: File toiri kora jayni!\n");
        return 1;
    }
    // Collect three integers and save them to the file.
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter num: ");
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }
    fclose(fptr);
    printf("Data successful bhabe save hoyeche!\n");
    return 0;
}
