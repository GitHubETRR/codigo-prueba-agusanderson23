#include <stdio.h>
int main(){
    int tiempototal,tiemposegundos,tiempominutos,tiempohoras;
    do{
       printf("Ingrese un tiempo en segundos menor a 86400 \n");
       scanf("%d", &tiempototal);
    }
    while((tiempototal>86400));
    tiempohoras=tiempototal/3600;
    tiempominutos=(tiempototal-tiempohoras*3600)/60;
    tiemposegundos=tiempototal-tiempohoras*3600-tiempominutos*60;
    printf("Esa cantidad de segundos es equivalente a %d horas %d  minutos %d segundos",tiempohoras, tiempominutos, tiemposegundos);
    return 0;
}