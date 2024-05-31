#include <stdio.h>
const float cmapie = 30.5;
const float cmapulgada = 2.5;
int main(){
    float centimetro;
    float pie;
    float pulgada;
    printf("Ingrese el valor en cm \n");
    scanf("%f", &centimetro);
    pie = centimetro/cmapie;
    pulgada = centimetro/cmapulgada;
    printf("El valor %fcm en pies es %f \n", centimetro, pie);
    printf("El valor %fcm en pulgadas es %f \n", centimetro, pulgada);
    return 0;
}
