#include <stdio.h>
#include <string.h>

int main() {
    char text[200];

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    // remove newline
    text[strcspn(text, "\n")] = '\0';

    int len = strlen(text);
    int isPalindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (text[i] != text[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome!\n");
    } else {
        printf("Not palindrome!\n");
    }

    return 0;
}
