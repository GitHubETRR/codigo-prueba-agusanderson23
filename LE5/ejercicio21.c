#include <stdio.h>
int main()
{
    int fecha,dias,meses,anios;
    do{
        printf("Ingrese una fecha en el formato DDMMAAAA\n");
        scanf("%d", &fecha);
        dias=fecha/1000000;
        meses=(fecha-dias*1000000)/10000;
        anios=fecha-dias*1000000-meses*10000;
    }
    while((dias>31) && (meses>12));
    printf("La fecha es %d del mes %d del anio %d",dias, meses, anios);
    return 0;
}