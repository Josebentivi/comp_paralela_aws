#include <stdio.h>

int main(void) {
  char caracter = 'p';
  char palavra[20] = {'c','o','m','p','u','t','a','c','a','o'};

  printf("String: %s\n", palavra);

  for(int i = 0; i < 11; i++){
    if(palavra[i] == caracter){
      printf("\nO caracter 'p' se encontra na posição: %d", i+1);
    }
  }
}
