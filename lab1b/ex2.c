#include <stdio.h>

int main(){
  float N1 = 7, N2 = 3, N3 = 10, ME = 8;
  float MA = (N1 + N2 * 2 + N3 * 3 + ME) / 7;
  char conceito;
  if (MA >= 9){
    conceito = 'A';
  }
  if (MA >= 7.5 && MA < 9){
    conceito = 'B';
  }
  if (MA >= 6 && MA < 7.5){
    conceito = 'C';
  }
  if (MA >= 4 && MA < 6){
    conceito = 'D';
  }
  if (MA < 4){
    conceito = 'E';
  }
  printf("N1 = %.2f, N2 = %.2f, N3 = %.2f, ME = %.2f\n", N1, N2, N3, ME);
  printf("Média de aproveitamento: %.2f\n", MA);
  printf("Conceito: %c\n", conceito);
}
