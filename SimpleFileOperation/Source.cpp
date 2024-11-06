#include <stdio.h>

int main() {
    printf("Writing Text into File.............................");
    FILE* filePointer;
    filePointer = fopen("example.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(filePointer, "Hello, World!\n");
    fclose(filePointer);

    printf("Reading Text from the File.............................");
    filePointer = fopen("example.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, 100, filePointer) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePointer);
    return 0;
}