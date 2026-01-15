#include <stdio.h>

int main() {
    int choice;
    double a, b;

    printf("=== Simple Calculator ===\n");
    printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n");
    printf("Choose (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", a + b);
            break;
        case 2:
            printf("Result: %.2f\n", a - b);
            break;
        case 3:
            printf("Result: %.2f\n", a * b);
            break;
        case 4:
            if (b == 0) {
                printf("ERROR: Division by zero!\n");
            } else {
                printf("Result: %.2f\n", a / b);
            }
            break;
        default:
            printf("ERROR: Invalid choice!\n");
    }

    return 0;
}
