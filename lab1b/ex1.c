#include <stdio.h>

int main() {
    int tamanho = 2;
    int matriz[tamanho][tamanho];
    matriz[0][0] = 15;
    matriz[0][1] = 2;
    matriz[1][0] = 22;
    matriz[1][1] = 100;
    for (int i = 0; i < tamanho; i++) {
      for (int j = 0; j < tamanho; j++) {
        printf("M[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
    int menorNumero = matriz[0][0];
    int linhaMenorNumero = 0; 
    for (int i = 0; i < tamanho; i++){
      for (int j = 0; j < tamanho; j++){
        if (matriz[i][j] < menorNumero){
          menorNumero = matriz[i][j];
          linhaMenorNumero = i;
        }
      }
    }    
    printf("A linha que contém o menor número é: %d\n", linhaMenorNumero);
}
