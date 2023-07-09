#include<stdio.h>

int main()
{
    int a[3][3], b[3][3], i, j, k;
    int c[3][3] = {0}; // Initialize result matrix with all elements as 0
    
    // Read elements of matrix A from the user
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Read elements of matrix B from the user
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Perform matrix multiplication
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Print the result matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}







