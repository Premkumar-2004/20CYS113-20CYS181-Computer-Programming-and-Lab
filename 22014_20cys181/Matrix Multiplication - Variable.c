#include <stdio.h>

int main() {
    int row, column;
    scanf("%d%d", &row, &column); // Read the number of rows and columns from input

    int arr1[row][column]; // Declare the first matrix with given dimensions
    int arr2[row][column]; // Declare the second matrix with given dimensions
    int arr3[row][column]; // Declare the result matrix with given dimensions

    // Read values for the first matrix from input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Read values for the second matrix from input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Perform matrix multiplication and store the result in arr3
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr3[i][j] = 0; // Initialize arr3 element to 0
            for (int k = 0; k < column; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Print the result matrix arr3
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}