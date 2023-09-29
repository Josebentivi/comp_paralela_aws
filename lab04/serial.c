#include <stdio.h>
#define SIZE 1000

int matrix[SIZE][SIZE];
int vector[SIZE];
int result[SIZE];

void matVecMult() {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        result[i] = 0;
        for (j = 0; j < SIZE; j++)
            result[i] += matrix[i][j] * vector[j];
    }
}

int main() {
    // Inicialize a matriz e o vetor aqui
    matVecMult();
    return 0;
}

