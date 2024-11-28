#include <stdio.h>
int main(){
    float ladoa, ladob, superficie, perimetro;
    printf("Ingrese el valor  en cm de la altura del rectangulo\n");
    scanf("%f", &ladoa);
    printf("Ingrese el valor en cm de la base del rectangulo\n");
    scanf("%f", &ladob);
    superficie = ladoa*ladob;
    perimetro = 2*(ladoa+ladob);
    if(ladoa==ladob){
        printf("Con esas medidas, el rectangulo es cuadrado\n");
        printf("El perimetro de su rectangulo vale %fcm\n", perimetro);
        printf("La superficie de su rectangulo vale %fcm\n", superficie);
    }
    else{
        printf("El perimetro de su rectangulo vale %fcm\n", perimetro);
        printf("La superficie de su rectangulo vale %fcm\n", superficie); 
    }
    return 0;
}