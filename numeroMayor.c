#include <stdio.h>

int main (){
    int x, y;

    puts("Dame el primer valor");
    scanf("%d", &x);

    puts("Dame el segundo valor");
    scanf("%d", &y);

    if(x>y){
        printf("El numero mayor es: %d", x);
    }else{
        printf("El numero mayor es: %d", y);
    }

    return 0;
}