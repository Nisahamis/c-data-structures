#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1) Write to file
    FILE *fp = fopen("notes.txt", "w");
    if (fp == NULL) {
        printf("ERROR: Could not open file for writing.\n");
        return 0;
    }

    fprintf(fp, "C File I/O Example\n");
    fprintf(fp, "Line 1: Hello\n");
    fprintf(fp, "Line 2: This file was created by the program.\n");
    fclose(fp);

    printf("File written: notes.txt !\n\n");

    // 2) Read from file
    fp = fopen("notes.txt", "r");
    if (fp == NULL) {
        printf("ERROR: Could not open file for reading.\n");
        return 0;
    }

    printf("--- Reading notes.txt ---\n");
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}
