#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[256];  // Buffer to store the line

    // Open the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read a line from the file
    if (fgets(line, sizeof(line), file) != NULL) {
        // Print the line
        printf("Read line: %s", line);
    } else {
        // Handle the error or end of file
        printf("Error or end of file reached.\n");
    }

    // Close the file
    fclose(file);

    return EXIT_SUCCESS;
}
