#include <stdio.h>

// Function that uses printf (no return value)
void greetUser(char name[]) {
    printf("Hello, %s!\n", name);
    // No value is returned
}

// Function that uses return (returns a value)
int add(int a, int b) {
    return a + b;  // Value goes back to caller
}

// Function that does both
int multiply(int x, int y) {
    int result = x * y;
    printf("Multiplying %d and %d\n", x, y);  // Displays output
    return result;  // Returns value to caller
}

int main() {
    // printf: only displays, doesn't store anything
    greetUser("Ruchi");
    
    // return: stores the value for use
    int sum = add(5, 3);
    printf("Sum: %d\n", sum);
    
    // Both: displays AND returns
    int product = multiply(4, 6);
    printf("Product: %d\n", product);
    
    return 0;
}