#include <stdio.h>

int main(void) {

  int matriz[3][3] = 
  {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  printf("\nMatriz Inicial:\n");

  for (int i = 0; i < 3; i++) {
  printf("\n");
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
  }
        
}

printf("\n\nMultiplicação de linha por 3:\n");

for(int i = 0; i < 3; i++){
  matriz[2][i] *= 3;
}

for (int i = 0; i < 3; i++) {
  printf("\n");
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
  }
        
}


int m2[3][3] = 
  {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

printf("\n\nMultiplicação de coluna por 3:\n");
for(int i = 0; i < 3; i++){
  m2[i][2] *= 3;
}

for (int i = 0; i < 3; i++) {
  printf("\n");
    for (int j = 0; j < 3; j++) {
      printf("%d ", m2[i][j]);
  }
        
}


}
