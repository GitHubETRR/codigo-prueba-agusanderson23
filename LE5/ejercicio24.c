#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    float radio, altura, area, volumen;
    printf("Ingrese el valor del radio en cm\n");
    scanf("%f", &radio);
    printf("Ahora ingrese el valor de la altura en cm\n");
    scanf("%f", &altura);
    volumen= 2*PI*radio*altura;
    area= 2*PI*radio*altura+2*PI*(radio*radio);
    printf("El valor del volumen de un cilindro con esas medidas es %f mililitros y el valor del area sera de %fcm", volumen, area);
    return 0;
}