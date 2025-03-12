#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr1, *ptr2, *ptr3;

    ptr1 = (float *)malloc(sizeof(float));
    ptr2 = (float *)malloc(sizeof(float));
    ptr3 = (float *)malloc(sizeof(float));

    *ptr1 = 1.1f; *ptr2 = 2.2f; *ptr3 = 3.3f;

    float a = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = a;

    printf("ptr1: %.2f\n", *ptr1);
    printf("ptr2: %.2f\n", *ptr2);
    printf("ptr3: %.2f\n", *ptr3);

    free(ptr1); free(ptr2); free(ptr3);

    return 0;
}
