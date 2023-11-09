#include <stdio.h>
#include <time.h>

double funcao_e(double x, int n) {
    long double somatorio = 1.0;
    for (int i = n; i > 0; i--) {
        somatorio = 1 + x * somatorio / i;
    }
    return somatorio;
}

int main() {
    double x = 1.0;
    int n = 300;
    clock_t start_time = clock();
    long double somatorio = funcao_e(x, n);
    clock_t end_time = clock();
    double total_time = (double)(end_time - start_time)/CLOCKS_PER_SEC;
    printf("e ^ %.2f em %d iterações = %.50Lf\n", x, n, somatorio);
    printf("Tempo de Execução: %f\n", total_time);
    return 0;
}

