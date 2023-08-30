#include <stdio.h>

int main(void) {
  typedef struct {
    int Idade;    
    float Peso;       
    float Altura; 
} Pessoa;

  Pessoa p[3];

  p[0].Altura = 1.90;
  p[0].Idade = 19;
  p[0].Peso = 85.2;

  
  p[1].Altura = 1.78;
  p[1].Idade = 20;
  p[1].Peso = 60;

    
  p[2].Altura = 1.87;
  p[2].Idade = 23;
  p[2].Peso = 78.9;

  for(int i = 0; i<3; i++){
    printf("\nPessoa %d:",i+1);
    printf("\nAltura = %.2f", p[i].Altura);
    printf("\nIdade = %d", p[i].Idade);
    printf("\nPeso = %.2f\n", p[i].Peso);
   
  }
  
}
