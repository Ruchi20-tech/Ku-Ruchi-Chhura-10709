#include <stdio.h>
int main() {
    // 1. Odd or Even check using if-else
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    // 2. Maximum of three numbers using nested if
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(a > c)
            printf("Largest number = %d\n", a);
        else
            printf("Largest number = %d\n", c);
    } else {
        if(b > c)
            printf("Largest number = %d\n", b);
        else
            printf("Largest number = %d\n", c);
    }

    // 3. Ternary Operator (find largest of two numbers)
    int x, y, max;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x, &y);
     max = (x > y) ? x : y;
    printf("Largest using ternary operator = %d\n", max);

    // 4. Switch-case Calculator
    int n1, n2;
    int op;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Enter operator (1 for +, 2 for -, 3 for *, 4 for /): ");
    scanf("%d", &op);
    switch(op) {
        case 1: printf("Sum = %d\n", n1 + n2); break;
        case 2: printf("Difference = %d\n", n1 - n2); break;
        case 3: printf("Product = %d\n", n1 * n2); break;
        case 4: printf("Quotient = %.2f\n", (float)n1 / n2); break;
        default: printf("Invalid Operator\n");
    }
    return 0;
}
