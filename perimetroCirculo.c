#include <stdio.h>

int main (){
    float perim, radio; 
    int dos=2;
    float PI=3.1416;

    printf(" Calcula el perímetro de una circunferencia\n");
    printf(" Indique el tamaño de radio de la circunferencia");
    scanf("%f", &radio);

    perim= dos*PI*radio;

    printf(" El perímetro de la circunferencia es:  %f\n", perim);
    
    return 0;
}