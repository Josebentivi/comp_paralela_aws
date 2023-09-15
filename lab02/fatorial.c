#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned long long calcularFatorial(int init,int fim) {
  
    unsigned long long resultado = 1;
    for (int i = init; i <= fim; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
  int pipefd[2];
  pid_t pid;
  int num;
  printf("Digite um número: ");
  scanf("%d",&num);

  if (pipe(pipefd) == -1) {
    perror("pipe");
    exit(1);
  }

  pid = fork();

  if (pid == 0) {
    close(pipefd[0]);
    unsigned long long a = calcularFatorial(1,num/2);
    write(pipefd[1], &a, sizeof(a));
    exit(0);

  } else {    
    close(pipefd[1]);
    unsigned long long b;
    read(pipefd[0], &b, sizeof(b));
    unsigned long long a = calcularFatorial(num/2 + 1,num);
    unsigned long long result = a * b;

    printf("o fatorial de %d é %llu",num, result);
  }
  
}

