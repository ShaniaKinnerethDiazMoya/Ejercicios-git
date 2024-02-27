#include <stdio.h>

int main() {
    int i, N;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &N);

    printf("Números pares hasta %d son:\n", N);
    for (i = 0; i <= N; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}