#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;

    int *a = (int *)malloc(n * sizeof(int));

    printf("Enter Array Elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0, c = 0;
    printf("Number of - ints: ");
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            printf("%d ", i);
            sum += a[i];
            c++;
        }
    }

    if (c > 0) {
        printf("\nSAOZ: %.2f\n", (float)sum / c);
    } else {
        printf("\nNo - ints.\n");
    }
    free(a);
    return 0;
}
