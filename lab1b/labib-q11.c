#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10

void somarLinhas(int matrix[MAX_ROWS][MAX_COLS], int row1, int row2, int numCols) {
    for (int i = 0; i < numCols; i++) {
        matrix[row2][i] += matrix[row1][i];
    }
}

void multiplicarLinhas(int matrix[MAX_ROWS][MAX_COLS], int row1, int row2, int numCols) {
    for (int i = 0; i < numCols; i++) {
        matrix[row2][i] *= matrix[row1][i];
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row1 = 0; // Index of the first row to be summed
    int row2 = 1; // Index of the second row where the result will be placed

    printf("\nMatriz antes das operações:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nSomando linhas %d e %d. Multiplicando linhas %d e %d e :\n", row1+1,row2+1,row1+1,row2+1);
    somarLinhas(matrix, row1, row2, 3);
    multiplicarLinhas(matrix, row1, row2, 3);
    
    
    // Print the updated matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}




