#include <stdio.h>
#include <math.h>
float const pi=3.14;
int main(){
    float radio, area;
    printf("Ingrese el valor en m del radio del circulo\n");
    scanf("%f", &radio);
    area=pi*(radio*radio);
    printf("El area de un circulo de radio %fm es %fm2", radio, area);
    return 0;
}