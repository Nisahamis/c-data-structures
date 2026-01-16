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

    int *p = arr; // p points to arr[0]

    printf("\nArray elements using pointer:\n");
    for (int i = 0; i < n; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    printf("\nAddresses (for understanding):\n");
    for (int i = 0; i < n; i++) {
        printf("&arr[%d] = %p\n", i, (void*)&arr[i]);
    }

    return 0;
}
