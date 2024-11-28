#include <stdio.h>
#include <math.h>
int main(){
    float lado, superficie, perimetro;
    printf("Ingrese el valor en m2 de la superficie del cuadrado\n");
    scanf("%f", &superficie);
    lado=sqrt(superficie);
    perimetro=2*(lado+lado);
    printf("El valor del perimetro de ese cuadrado es %fm", perimetro);
    return 0;
}
