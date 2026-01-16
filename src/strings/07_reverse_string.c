#include <stdio.h>
#include <string.h>

int main() {
    char text[200];

    printf("Enter a text (max 199 characters): ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    int len = strlen(text);

    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }
    printf("\n");

    return 0;
}
