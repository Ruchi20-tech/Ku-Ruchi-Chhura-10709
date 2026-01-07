#include <stdio.h>

int main() {
    float x;
    printf("Enter a floating-point number: ");
    scanf("%f", &x);

    printf("🔮 Welcome to the Floating Fortune Teller 🔢\n\n");
    printf("%%f        -> %f\n", x);
    printf("%%.1f      -> %.1f\n", x);
    printf("%%.2f      -> %.2f\n", x);
    printf("%%.3f      -> %.3f\n", x);
    printf("%%6.2f     -> %6.2f\n", x);
    printf("%%8.3f     -> %8.3f\n", x);
    printf("%%0.2f     -> %0.2f\n", x);
    printf("%%10.4f    -> %10.4f\n", x);
    printf("%%e        -> %e\n", x);
    printf("%%E        -> %E\n", x);
    printf("%%g        -> %g\n", x);
    printf("%%G        -> %G\n", x);

    printf("\n✨ Each format changes precision, width, or notation! ✨\n");
    return 0;
}