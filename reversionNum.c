#include <stdio.h>

int main() {
    int num, reverse = 0, rem;

    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    printf("El número invertido es: %d\n", reverse);

    return 0;
}
