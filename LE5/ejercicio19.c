#include <stdio.h>
#include <math.h>
int main(){
    float cateto1, cateto2, hipotenusa;
    do{
        
        printf("Ingrese el valor en cm del cateto 1 del triangulo\n");
        scanf("%f", &cateto1);
        printf("Ingrese el valor en cm del cateto2 del triangulo\n");
        scanf("%f", &cateto2);
    }
    while(!(cateto1>0 && cateto2>0));
    hipotenusa=sqrt((cateto1*cateto1)+(cateto2*cateto2));
    printf("El valor de la hipotenusa de ese triangulo es %f \n", hipotenusa);
    return 0;
}