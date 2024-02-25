#include <stdio.h>

int main (){
    int x;
    int suma=0;

    for(int i=1; i<=8; i++){
        scanf("%d", &x);
        suma+=x;
    }

    printf("La suma es: %d \n", suma);
    return 0;
}