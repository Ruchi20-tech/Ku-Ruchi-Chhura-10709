/** projet title :Bitwise Utility Tool 
 * project topic: Bitwise ops
 * tech stack: C, VS code, Github
 *  Display a menu for bitwise operations. Take two integers.
 * Use switch-case to apply  &, |, ^, <<, >> and print the results.
 */
#include <stdio.h>
#include <stdlib.h>

void displayMenu() {
    printf("\n========== BITWISE UTILITY TOOL ==========\n");
    printf("1. AND Operation (&)\n");
    printf("2. OR Operation (|)\n");
    printf("3. XOR Operation (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");
    printf("6. Exit\n");
    printf("==========================================\n");
    printf("Enter your choice (1-6): ");
}

int performAND(int a, int b) {
    return a & b;
}

int performOR(int a, int b) {
    return a | b;
}

int performXOR(int a, int b) {
    return a ^ b;
}

int performLeftShift(int a, int b) {
    return a << b;
}

int performRightShift(int a, int b) {
    return a >> b;
}

int main() {
    int num1, num2, choice, result;
    
    printf("Welcome to Bitwise Utility Tool\n");
    printf("================================\n\n");
    
    while(1) {
        displayMenu();
        scanf("%d", &choice);
        
        if(choice == 6) {
            printf("\nThank you for using Bitwise Utility Tool!\n");
            break;
        }
        
        if(choice >= 1 && choice <= 5) {
            printf("\nEnter first integer: ");
            scanf("%d", &num1);
            printf("Enter second integer: ");
            scanf("%d", &num2);
            
            switch(choice) {
                case 1:
                    result = performAND(num1, num2);
                    printf("\nResult of %d & %d = %d\n", num1, num2, result);
                    break;
                case 2:
                    result = performOR(num1, num2);
                    printf("\nResult of %d | %d = %d\n", num1, num2, result);
                    break;
                case 3:
                    result = performXOR(num1, num2);
                    printf("\nResult of %d ^ %d = %d\n", num1, num2, result);
                    break;
                case 4:
                    result = performLeftShift(num1, num2);
                    printf("\nResult of %d << %d = %d\n", num1, num2, result);
                    break;
                case 5:
                    result = performRightShift(num1, num2);
                    printf("\nResult of %d >> %d = %d\n", num1, num2, result);
                    break;
            }
        } else {
            printf("\nInvalid choice! Please enter a number between 1 and 6.\n");
        }
    }
    
    return 0;
}