#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter array size (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("ERROR: n must be positive.\n");
        return 0;
    }

    // allocate memory dynamically
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("ERROR: Memory allocation failed.\n");
        return 0;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double avg = (double)sum / n;
    printf("Average: %.2f\n", avg);

    // free allocated memory
    free(arr);
    arr = NULL;

    return 0;
}
