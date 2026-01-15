#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("ERROR: Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d! = %lld\n", n, fact);
    return 0;
}
