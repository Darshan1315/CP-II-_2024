#include <stdio.h>

int main() {
    FILE *filePointer;
    char data[100] = "Hello, File Handling in C!";
    filePointer = fopen("example.txt", "w");
    fprintf(filePointer, "%s", data);
    fclose(filePointer);
    filePointer = fopen("example.txt", "r");
    fscanf(filePointer, "%s", data);
    printf("Data from file: %s\n", data);
    fclose(filePointer);
    filePointer = fopen("example.txt", "a");
    fputc('\n', filePointer);
    fputc('A', filePointer);
    fclose(filePointer);
    filePointer = fopen("example.txt", "r");
    char ch;
    printf("Data character by character: ");
    while ((ch = fgetc(filePointer)) != EOF) {
        printf("%c", ch);
    }
    fclose(filePointer);
    filePointer = fopen("example.txt", "r");
    fseek(filePointer, 7, SEEK_SET); 
    fscanf(filePointer, "%s", data);
    printf("\nData after fseek: %s\n", data);
    fclose(filePointer);
    filePointer = fopen("example.txt", "r");
    rewind(filePointer);
    fscanf(filePointer, "%s", data);
    printf("Data after rewind: %s\n", data);
    fclose(filePointer);

    return 0;
}
