#include <stdio.h>
int main()
{
    float gradosf,gradosc;
    printf("Ingrese el valor de la temperatura en grados celsius\n");
    scanf("%f", &gradosc);
    gradosf=(gradosc*1.8)+32;
    printf("El equivalente en grados fahrenheit a su valor ingresado en grados celsius es %f°", gradosf);
    return 0;
}