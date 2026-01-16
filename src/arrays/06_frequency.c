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

    printf("\n--- Frequency of Elements ---\n");

    for (int i = 0; i < n; i++) {
        int alreadyCounted = 0;

        // check if arr[i] appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted) continue;

        int count = 1;
        for (int k = i + 1; k < n; k++) {
            if (arr[i] == arr[k]) {
                count++;
            }
        }

        printf("%d : %d times\n", arr[i], count);
    }

    return 0;
}
