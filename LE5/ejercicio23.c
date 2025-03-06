#include <stdio.h>
#include <math.h>
int main()
{
    float lado1, lado2, lado3, perimetro, area, semiperimetro;
    printf("Ingrese el valor del lado 1 en cm\n");
    scanf("%f", &lado1);
    printf("Ahora ingrese el valor del lado 2 en cm\n");
    scanf("%f", &lado2);
    printf("Y por ultimo ingrese el valor del lado 3 en cm\n");
    scanf("%f", &lado3);
    if(lado1+lado2>lado3){
        perimetro=lado1+lado2+lado3;
        semiperimetro=perimetro/2;
        area=sqrt(semiperimetro*(semiperimetro-lado1)*(semiperimetro-lado2)*(semiperimetro-lado3));
        printf("Con esos valores, el area del triangulo es de %fcm", area);
    }
    else{
        printf("Con esos valores, no se puede formar un triangulo");
    }
    return 0;
}