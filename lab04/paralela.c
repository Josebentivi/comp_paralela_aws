#include <stdio.h>
#include <pthread.h>
#define SIZE 1000
#define NUM_THREADS 4

int matrix[SIZE][SIZE];
int vector[SIZE];
int result[SIZE];

typedef struct {
    int start_row;
    int end_row;
} thread_data;

thread_data thread_data_array[NUM_THREADS];

void *matVecMult(void *arg) {
    thread_data *data = (thread_data *)arg;
    int i, j;
    for (i = data->start_row; i < data->end_row; i++) {
        result[i] = 0;
        for (j = 0; j < SIZE; j++)
            result[i] += matrix[i][j] * vector[j];
    }
    pthread_exit(NULL);
}

int main() {
    // Inicialize a matriz e o vetor aqui
    pthread_t threads[NUM_THREADS];
    int i;
    for (i = 0; i < NUM_THREADS; i++) {
        thread_data_array[i].start_row = i * (SIZE / NUM_THREADS);
        thread_data_array[i].end_row = (i+1) * (SIZE / NUM_THREADS);
        pthread_create(&threads[i], NULL, matVecMult, &thread_data_array[i]);
    }
    for (i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }
    return 0;
}
