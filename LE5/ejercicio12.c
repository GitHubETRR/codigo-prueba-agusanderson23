#include <stdio.h>
const int anioadia = 365;
int main(){
    int anio;
    int diasvividos;
    printf("Ingrese sus anios de edad\n");
    scanf("%d", &anio);
    diasvividos = anio*anioadia;
    printf("Su edad en anios %d equivale a %d dias", anio, diasvividos);
    return 0;
}
