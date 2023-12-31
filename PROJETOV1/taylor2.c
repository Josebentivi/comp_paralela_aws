#include <stdio.h>
#include <omp.h>

long double calculate_e(int limit)
{
    long double e = 1.0;
    long double term = 1.0;

    #pragma omp parallel for num_threads(2) reduction(+:e)
    for (int i = 1; i <= limit; i++)
    {
        term /= i; 
        e += term;
    }

    return e;
}

int main()
{
    int limit = 1000; // Aumente este valor para uma aproximação mais precisa
    double start_time = omp_get_wtime();
    long double e = calculate_e(limit);
    double end_time = omp_get_wtime();

    printf("Aproximação de e com %d termos: %.50Lf\n", limit, e);
    printf("Tempo de execução: %f segundos\n", end_time - start_time);

    return 0;
}
