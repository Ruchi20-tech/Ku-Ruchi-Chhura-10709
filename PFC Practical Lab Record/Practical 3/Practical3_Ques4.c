#include <stdio.h>

void printStarPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printNumberPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n = 5; // You can change this value for a different size

    printf("Star Pattern:\n");
    printStarPattern(n);

    printf("\nNumber Pattern:\n");
    printNumberPattern(n);

    return 0;
}