#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n = 10;

    int *b = (int *)malloc(n * sizeof(int));
    float *c = (float *)malloc(n * sizeof(float));
    printf("Введите элементы массива b:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int c_size = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            c[c_size++] = sqrt(b[i]) / 5.0;
        }
    }

    for (int i = 0; i < c_size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < c_size; j++) {
            if (c[j] < c[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            float temp = c[i];
            c[i] = c[min_index];
            c[min_index] = temp;
        }
    }

    printf("Отсортированный массив c: ");
    for (int i = 0; i < c_size; i++) {
        printf("%.2f ", c[i]);
    }
    printf("\n");

    free(b); free(c);
    return 0;
}
