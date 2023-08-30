#include <stdio.h>
#include <string.h>

int main(){
  char nome1[10] = "Pedro";
  char nome2[10] = "João";
  printf("%s\n%s",nome1,nome2);
  int x = strcmp(nome1, nome2);
  if(x > 0){  
    printf("\nNomes em ordem alfabética: %s, %s\n", nome2, nome1);
  }
  else if(x < 0){
    printf("\nNomes em ordem alfabética: %s, %s\n", nome1, nome2);
  }
  else{
    printf("Os nomes são iguais\n");
  }
}
