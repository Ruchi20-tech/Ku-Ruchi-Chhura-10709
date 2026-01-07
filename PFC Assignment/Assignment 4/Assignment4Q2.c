/*Function to check whether a number is palindrome
Assignment-4 Question-2*/
#include <stdio.h>

int isPalindrome(int num)
{
    int original = num, rev = 0;

    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }

    if (original == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("The number is a palindrome");
    else
        printf("The number is not a palindrome");

    return 0;
}