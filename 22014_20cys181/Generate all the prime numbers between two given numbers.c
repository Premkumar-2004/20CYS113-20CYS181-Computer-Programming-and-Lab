#include<stdio.h>

// Function to check if a number is prime or not
int isprime(int num)
{
    int i, check = 0;
    
    // Iterate from 1 to the number itself
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            check++;
        }
    }
    
    // If the number has exactly 2 factors (1 and itself), it is prime
    if(check == 2)
    {
        printf("%d ", num);
    }
}

// Function to generate prime numbers between a given range
void generateprime(int start, int end)
{
    int num;
    printf("Prime numbers between %d and %d are: ", start, end);
    
    // Iterate from the start number to the end number
    for(num = start; num <= end; num++)
    {
        isprime(num);//Calling the isprime function
    }
}

int main()
{
    int start, end;
    scanf("%d%d", &start, &end);
    if(start>0&&end>0)
    {
    generateprime(start, end); //Calling the generateprime function
    }
    else{
        printf("The given range is negative");
    }
    return 0;
}