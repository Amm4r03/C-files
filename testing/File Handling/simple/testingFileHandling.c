// testing file handling

#include <stdio.h>
int main()
{
    FILE *filePointer;
    filePointer = fopen("testingFileHandling.txt", "w");       // Opens file for reading
    // there are different modes for handling files

    if (filePointer == NULL) {
    printf("Error opening the file.\n");
    // Handle the error
}

    /*
    FILE HANDLING MODES
    1. "r" : read mode
    2. "w" : write mode (creates new or truncates existing files)
    3. "a" : appends new data to already existing files
    */

    fprintf(filePointer, "Hello, world!\n"); // Writes formatted data to the file
    fputs("Another line", filePointer); // Writes a string to the file

    fclose(filePointer);

    return 0;
}