#include<stdio.h>

#define size 2

// Structure to represent complex numbers
struct complex {
    int real; // Real part of the complex number
    int complex; // Imaginary part of the complex number
};

int main()
{   
    struct complex c[size]; // Array of complex numbers
    int j, i, res1, res2, re1, re2;
    
    // Read the real and complex parts of the complex numbers
        for(j = 0; j < size; j++)
        {
            printf("Enter the real part of complex number %d: ", j + 1);
            scanf("%d", &c[j].real);
            
            printf("Enter the complex part of complex number %d: ", j + 1);
            scanf("%d", &c[j].complex);
        }
    
    // Perform addition and subtraction of complex numbers
    res1 = c[0].real + c[1].real;
    res2 = c[0].complex + c[1].complex;
    re1 = c[0].real - c[1].real;
    re2 = c[0].complex - c[1].complex;
    
    // Print the results
    printf("Addition: %d+%di\n", res1, res2);
    printf("Subtraction: %d+%di\n", re1, re2);
    
    return 0;
}