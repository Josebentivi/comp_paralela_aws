#include <stdio.h>

int main(void) {
  int matriz[3][3] = 
  {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  int matriz_transposta[3][3];

  printf("\n\nMatriz Original:\n\n");

  for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0; j<3; j++){
      printf("%d ", matriz[i][j]);
    }
  }

  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      matriz_transposta[i][j]=matriz[j][i];
    }
  }

  printf("\n\nMatriz Transposta:\n\n");

   for(int i = 0; i<3; i++){
    printf("\n");
    for(int j = 0; j<3; j++){
      printf("%d ", matriz_transposta[i][j]);
    }
  }

}
