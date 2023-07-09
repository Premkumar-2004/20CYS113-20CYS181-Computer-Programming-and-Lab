#include <stdio.h>

#define MAX_ROWS 10

int main() {
    int triangle[MAX_ROWS][MAX_ROWS];
    int numRows, i, j;

    printf("Enter the number of rows to generate (1-%d): ", MAX_ROWS);
    scanf("%d", &numRows);

    for (i = 0; i < numRows; i++) {
   
        for (j = 0; j <= i; j++) {
           
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }


    printf("Pascal's triangle:\n");
    for (i = 0; i < numRows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
