#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void multiplicarLinha(int matrix[MAX_ROWS][MAX_COLS], int row, int num, int numCols) {
    for (int i = 0; i < numCols; i++) {
        matrix[row][i] *= num;
    }
}

void multiplicarColuna(int matrix[MAX_ROWS][MAX_COLS], int col, int num, int numRows) {
    for (int i = 0; i < numRows; i++) {
        matrix[i][col] *= num;
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    printf("\nMatriz antes da multiplicação:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int row = 1;
    int col = 1;
    int num = 3;
    int num2 = 2;
    int dimension = 3;
  
    printf("\nMultiplicando linha %d por %d e coluna %d por %d e :\n", row+1,num,col+1,num2);
  
    multiplicarLinha(matrix, row, num, 3); 
    multiplicarColuna(matrix, col, num, 3); 
  

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
