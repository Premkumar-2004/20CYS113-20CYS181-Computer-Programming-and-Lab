#include<stdio.h>

int main()
{
    int rows, i, j, space;

    // Read the number of rows from the user
    scanf("%d", &rows);

    // Check for invalid input
    if (rows > 25 || rows < 0)
    {
        printf("Invalid Input");
    }
    else
    {
        // Print the Full Pyramid pattern
        for (i = 1; i <= rows; i++)
        {
            // Print spaces 
            for (space = 1; space <= rows - i; space++)
            {
                printf("  ");
            }

            // Print asterisks 
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("* ");
            }

            printf("\n");
        }
    }

    return 0;
}