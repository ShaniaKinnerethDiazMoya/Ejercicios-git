#include <stdio.h>

int main() {
    int num, i, es_primo = 1;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);

    // Verificando si es primo
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            es_primo = 0;
            break;
        }
    }

    if (es_primo)
        printf("%d es un número primo.\n", num);
    else
        printf("%d no es un número primo.\n", num);

    return 0;
}