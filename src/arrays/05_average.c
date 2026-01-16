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
    long long sum = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    double avg = (double)sum / n;
    printf("Average: %.2f\n", avg);

    return 0;
}
