#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int number = 5;
    printf("Square of %d is %d\n", number, square(number));
    return 0;
}