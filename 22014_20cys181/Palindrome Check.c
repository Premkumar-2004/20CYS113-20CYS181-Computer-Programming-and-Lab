#include<stdio.h>

int main()
{
    int n, n1, rev = 0;
    scanf("%d", &n); // Read input from the user
    n1 = n;
    if (n >= 0) // If the number is non-negative
    {
        while (n > 0) // Find reverse of the number
        {
            int temp = n % 10;
            rev = rev * 10 + temp;
            n = n / 10;
        }
        // Check if the reverse number is equal to the original number
        if (rev == n1) 
        {
            printf("Is a palindrome.");
        }
        else {
            printf("Is not a palindrome.");
        }
    }
    else // If the number is negative
    {
        n1 = n1 * -1; // Convert it to positive
        int n2=n1;
        while (n1 > 0) // Find the reverse of the number
        {
            int temp = n1 % 10;
            rev = rev * 10 + temp;
            n1 = n1 / 10;
        }
        // Check if the reverse number is equal to the original number
        if (rev == n2) 
        {
            printf("Is a palindrome.");
        }
        else {
            printf("Is not a palindrome.");
        }
    }
    return 0;
}