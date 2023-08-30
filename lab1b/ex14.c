#include <stdio.h>
#include <string.h>

int main(){
  char Str[100] = "Ciência a Computação";
  int pos = 9;
  char c = 'd';
  printf("%s\n", Str);
  printf("Posição de inserção: %d\n", pos);
  printf("Caractere a ser inserido: %c\n", c);
  int tam = strlen(Str);
  for (int i = tam; i >= pos; i--) {
    Str[i + 1] = Str[i];
  }
  Str[pos] = c;
  printf("Apos inserção: %s\n", Str);
}
