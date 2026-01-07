//EVEN SUM 22
//Assignment-1 Question-1
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            sum = sum + i;
        }
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}
