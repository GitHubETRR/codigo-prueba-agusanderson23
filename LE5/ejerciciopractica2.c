#include <stdio.h>

int main(){
    float Numero;
    float Suma = 0;
    char Respuesta;
    do{
        printf("Ingrese un numero : ");
        scanf("%f", &Numero );
        Suma += Numero;
        printf("El total acumulado es %f \n", Suma);
        printf("Desea continuar? Elija s para si o n para no\n");
        scanf(" %c", &Respuesta);
        if ( Respuesta != 's' && Respuesta != 'n'){
            printf("La opcion no es valida. Porfavor ingrese s o n.\n");
        }
    }
    while(Respuesta == 's');
    printf("Programa finalizado. Suma total : %f \n", Suma);
    return 0;
}