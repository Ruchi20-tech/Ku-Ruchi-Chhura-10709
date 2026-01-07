#include <stdio.h>

int main() {
    int A, B;

    // Ask user for input
    printf("Enter number of clouds in morning and evening (A B): ");
    scanf("%d %d", &A, &B);

    // Check the condition
    if (B >= 3 * A)
        printf("Rain 🌧");
    else
        printf("Dry ☀");

    return 0;
}