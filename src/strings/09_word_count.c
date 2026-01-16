#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[300];

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    // remove newline
    text[strcspn(text, "\n")] = '\0';

    int count = 0;
    int inWord = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (!isspace((unsigned char)text[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Word count: %d\n", count);
    return 0;
}
