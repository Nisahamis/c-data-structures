#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Hello, %s! Welcome to C.\n", name);
    return 0;
}
