#include <stdio.h>
#include <math.h>


int main(void) {
   int matriz[3][3] = 
  {
    {1, 2, 3},
    {4, -5, 6},
    {7, 8, -9}
  };

  int matriz_aux[3][3];

  printf("\n\nMatriz Original:\n\n");

  for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0; j<3; j++){
      printf("%d ", matriz[i][j]);
    }
  }

  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      matriz_aux[i][j]=fabs(matriz[j][i]);
    }
  }

  printf("\n\nMatriz com módulos:\n\n");

   for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0; j<3; j++){
      printf("%d ", matriz_aux[i][j]);
    }
  }

}
