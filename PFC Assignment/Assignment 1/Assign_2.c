#include <stdio.h>
int main() 
{
    char ch;          // Student's initial
    int days;         // Overdue days
    float rate;       // Fine rate per day
    float fine;       // Total fine amount

    // Input format: ch days rate
    printf("Enter member initial, overdue days, and fine rate: ");
    scanf(" %c %d %f", &ch, &days, &rate);

    // Calculate fine
    fine = days * rate;

    // Output format — exactly as mentioned in the question
    printf("Library Receipt\v");
    printf("Member Initial: %c\n", ch);
    printf("Days:\t\t%05d\n", days);
    printf("Fine:\t\t%.2f INR\n", fine);
    
   return 0;
    }