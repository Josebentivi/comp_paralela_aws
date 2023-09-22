#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  int shmid = shmget(IPC_PRIVATE, sizeof(int), 0666);
  if (shmid == -1) {
    perror("shmget");
    exit(EXIT_FAILURE);
  }

  int *var_compartilhada = shmat(shmid, NULL, 0);
  if (var_compartilhada == (void *)-1) {
    perror("shmat");
    exit(EXIT_FAILURE);
  }

  *var_compartilhada = 1;

  printf("Valor inicial: %d\n", *var_compartilhada);

  pid_t pid = fork();
  if (pid == 0) {

    *var_compartilhada += 2;

    printf("Valor modificado: %d\n", *var_compartilhada);

    exit(EXIT_SUCCESS);
  }

  waitpid(pid, NULL, 0);

  *var_compartilhada *= 4;

  printf("Valor final: %d\n", *var_compartilhada);

  shmdt(var_compartilhada);
  shmctl(shmid, IPC_RMID, NULL);

  return 0;
}
