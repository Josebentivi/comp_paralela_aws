#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>

double f(double x) {
    return exp(x);
}

double Trap(double a, double b, int n) {
    double h, x, result;
    int i;
    h = (b - a) / n;
    result = (f(a) + f(b)) / 2.0;
    for(i = 1; i <= n-1; i++) {
        x = a + i * h;
        result += f(x);
    }
    result = result * h;
    return result;
}

int main(int argc, char* argv[]) {
    double a, b;
    int n;
    double result;
    
    printf("Enter a, b, and n\n");
    scanf("%lf %lf %d", &a, &b, &n);
    double tempo_inicial = omp_get_wtime();
    result = Trap(a, b, n);
    double tempo_final = omp_get_wtime();
    double tempo_exec = tempo_final - tempo_inicial;

    printf("With n = %d trapezoids, our estimate\n", n);
    printf("of the integral from %f to %f = %.14e\n", a, b, result);
    printf("Tempo de Execução: %f seconds\n", tempo_exec);
    return 0;
}
