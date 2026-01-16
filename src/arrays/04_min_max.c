#include <stdio.h>

int main() {
    int n;

    printf("Enter array size (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("ERROR: n must be positive.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
