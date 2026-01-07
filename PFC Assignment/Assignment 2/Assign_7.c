#include <stdio.h>

int main() {
    int X;
    printf("Enter the weight (in kg) Rohan lifts in his 1st set: ");
    scanf("%d", &X);

    int third_set = X + 20;
    printf("Weight in 3rd set: %d kg", third_set);

    return 0;
}