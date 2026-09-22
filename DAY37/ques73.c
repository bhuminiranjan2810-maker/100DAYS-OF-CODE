//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rowSums[ROWS];
    for (int i = 0; i < ROWS; i++) {
        int sum = 0;
        
        for (int j = 0; j < COLS; j++) {
            sum += matrix[i][j];
        }
        rowSums[i] = sum;
    }
    printf("The row sums stored in the array are:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Sum of Row %d = %d\n", i + 1, rowSums[i]);
    }
    return 0;
}
