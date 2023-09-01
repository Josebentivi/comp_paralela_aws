

#include <stdio.h>

int remover_char(char palavra[], char caracter){
  for(int i = 0; i < 100; i++){
    if(palavra[i] == caracter){
      printf("\nO caracter '%c' se encontra na posição: %d",caracter, i+1);
    }
  }
  
}


int main(void) {
  char caracter = 'p';
  char palavra[100] = {'c','o','m','p','u','t','a','c','a','o'};
  printf("String: %s\n", palavra);
  remover_char(palavra,caracter);


  
}
