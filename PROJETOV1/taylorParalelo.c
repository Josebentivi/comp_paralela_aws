#include <stdio.h>
#include <omp.h>

long double factorial(int n) {
    long double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long double calculate_e(int limit) {
    long double e = 1.0;

    #pragma omp parallel for reduction(+:e) num_threads(2)
    for (int i = 1; i <= limit; i++) {
        e += 1 / factorial(i);
    }

    return e;
}

int main() {
int limit = 1000;
double start_time = omp_get_wtime();
long double e = calculate_e(limit);
double end_time = omp_get_wtime();
printf("Aproximação de e com %d termos: %.50Lf\n", limit, e);
printf("Tempo de execução: %f segundos\n", end_time - start_time);
return 0;
}
