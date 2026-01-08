// AIM 3: Declare variables (int, float, char, double)
//         Use scanf() and printf() with format specifiers
//         Swap two numbers using and without using a third variable

#include <stdio.h>
int main() {
    int a, b, x, y;
    float f;
    char c;
    double d, temp;

    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a double: ");
    scanf("%lf", &d);

    // Display values
    printf("\nInteger = %d\n", a);
    printf("Float = %.2f\n", f);
    printf("Character = %c\n", c);
    printf("Double = %.3lf\n", d);

    // Swap using extra variable
    printf("\nEnter two numbers to swap (using temp): ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;
    printf("After swapping (with temp): a = %d, b = %d\n", a, b);

    // Swap without extra variable
    printf("\nEnter two numbers to swap (without temp): ");
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping (without temp): x = %d, y = %d\n", x, y);
    return 0;
}
