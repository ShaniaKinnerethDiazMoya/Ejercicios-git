#include <stdio.h>

int main(){
    int x, y, z;

    printf("Escribe el primer número: ");
    scanf("%d",&x);

    printf("Escribe el segundo número: ");
    scanf("%d",&y);

    printf("Escribe el tercer número: ");
    scanf("%d",&z);

    if ( x > y && x > z )
    printf("El número mayor es: %d", x);

    else if  ( y > x && y > z )
    printf("El número mayor es: %d", y);

    else if  ( z > x && z > y )
    printf("El número mayor es: %d", z);

    else printf("Los tres números son iguales");

    puts("\n");
    return 0;

}