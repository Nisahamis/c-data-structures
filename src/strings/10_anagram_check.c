#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[200], s2[200];

    printf("Enter first word: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second word: ");
    fgets(s2, sizeof(s2), stdin);

    // remove newline
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // convert to lowercase
    for (int i = 0; s1[i]; i++) s1[i] = tolower((unsigned char)s1[i]);
    for (int i = 0; s2[i]; i++) s2[i] = tolower((unsigned char)s2[i]);

    // frequency arrays for ASCII
    int freq1[256] = {0};
    int freq2[256] = {0};

    // count frequencies (ignore spaces)
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != ' ') freq1[(unsigned char)s1[i]]++;
    }

    for (int i = 0; s2[i] != '\0'; i++) {
        if (s2[i] != ' ') freq2[(unsigned char)s2[i]]++;
    }

    // compare frequencies
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagram!\n");
            return 0;
        }
    }

    printf("Anagram!\n");
    return 0;
}
