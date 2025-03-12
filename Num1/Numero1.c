#include <stdio.h>

int main() {
    int a, b;
    int *A, *B;

    a = 8; b = 8;

    A = &a; B = &b;

    *A *= 2; *B /= 2;

    printf("a: %d\n", a); printf("b: %d\n", b);

    return 0;
}
