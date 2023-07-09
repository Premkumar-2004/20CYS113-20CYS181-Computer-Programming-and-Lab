#include<stdio.h>

int main()
{
    int row, i, j;
    
    // Read the number of rows from the user
    scanf("%d", &row);
    
    // Check for invalid input
    if(row <= 0 || row >= 25)
    {
        printf("Invalid Input\n");
    }
    else
    {
        // Print the pattern of asterisks
        for(i = 0; i < row; i++)
        {
            for(j = 0; j <= i; j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
    }
    return 0;
}