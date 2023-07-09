#include <stdio.h>

// Function to convert a decimal number to binary
void binary(int number)
{
    int binary[32];
    int i = 0;
    
    // Convert decimal to binary by repeated division by 2
    while (number > 0) {
        binary[i] = number % 2;  // Store remainder
        number = number / 2;    // Update number by dividing by 2
        i++;
    }
    
    // Print binary equivalent
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert a decimal number to octal
void octal(int number)
{
    // Print octal equivalent using format specifier "%o"
    printf("Octal equivalent: %o\n", number);
}

// Function to convert a decimal number to hexadecimal
void hexa(int number)
{
    // Print hexadecimal equivalent using format specifier "%X"
    printf("Hexadecimal equivalent: %X\n", number);
}

int main()
{
    int number;
    
    // Input the decimal number from the user
    scanf("%d", &number);
    //Check for negative case
    if (number <= 0) {
        printf("Error: Value should be greater than 0\n");
    }
    else {
        // Call the conversion functions if the number is valid
        binary(number);
        octal(number);
        hexa(number);
    }
    
    return 0;
}