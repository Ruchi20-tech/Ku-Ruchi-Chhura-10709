//Function to reverse a number
//Assignment-4 Question-1

#include <stdio.h>

int reverseNumber(int num)
{
    int rev = 0;
    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    return rev;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = reverseNumber(n);

    printf("Reversed number is: %d", result);

    return 0;
}
