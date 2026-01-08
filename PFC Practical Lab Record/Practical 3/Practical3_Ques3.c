#include <stdio.h>
// Explanation of break and continue statements:
// break: Immediately exits the loop, skipping remaining iterations
// continue: Skips the current iteration and moves to the next one


int main() {
    printf("=== Using break and continue in loops ===\n\n");
    
    // Example 1: Using break to exit loop early
    printf("Example 1: break statement\n");
    printf("Numbers from 1 to 10 (stops at 6):\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;  // Exit loop when i equals 6
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Example 2: Using continue to skip iterations
    printf("Example 2: continue statement\n");
    printf("Numbers 1-10 (skipping even numbers):\n");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Example 3: Using both break and continue
    printf("Example 3: both break and continue\n");
    printf("Odd numbers until 7:\n");
    for (int i = 1; i <= 15; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        if (i > 7) {
            break;  // Stop when number exceeds 7
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Example 4: Using break in while loop
    printf("Example 4: break in while loop\n");
    printf("Countdown: ");
    int count = 5;
    while (count >= 0) {
        if (count == 2) {
            break;  // Stop countdown at 2
        }
        printf("%d ", count);
        count--;
    }
    printf("\n");
    
    return 0;
}