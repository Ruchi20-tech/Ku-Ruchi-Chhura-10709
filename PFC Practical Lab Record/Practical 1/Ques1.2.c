// AIM 2: Program to perform Sum and find Largest of Two number/
    #include <stdio.h>

int main() {
    int num1, num2, sum, largest;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Determine the largest number
    if (num1 > num2) {
        largest = num1;
    } else {
        largest = num2;
    }

    // Output the results
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    printf("The largest of %d and %d is: %d\n", num1, num2, largest);
    printf("\nVS Code Shortcuts:\n");
    printf("1. Ctrl + S - Save file\n");
    printf("2. Ctrl + / - Comment/Uncomment\n");
    printf("3. Ctrl + B - Toggle Sidebar\n");
    printf("4. Alt + ↑/↓ - Move line\n");
    printf("5. Ctrl + Shift + N - New Window\n");

    return 0;
}     