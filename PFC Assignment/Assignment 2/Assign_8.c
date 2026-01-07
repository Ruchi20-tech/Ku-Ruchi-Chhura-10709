#include <stdio.h>

int main() {
    int A, B;
    printf("Enter gift price (A) and voucher value (B): ");
    scanf("%d %d", &A, &B);

    int pay = A - B;
    if (pay < 0)
        pay = 0;

    printf("Amount Rohan has to pay: %d", pay);
    return 0;
}