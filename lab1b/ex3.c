#include <stdio.h>

int main() {
    int numeroMax = 13;
    printf("Número máximo: %d\n", numeroMax);
    for (int i = 1; i <= (numeroMax + 1) / 2; i++) {
      for (int j = 1; j < i; j++) {
        printf("   ");
      }  
      for (int j = i; j <= numeroMax - i + 1; j++) {
        printf("%2d ", j);
      }
      printf("\n");
    }
}
