#include <stdio.h>
int main()
{
    int hora1, hora2, horafinal, segundofinal, minutofinal, segundo1, minuto1, segundo2, minuto2;
    printf("Ingrese el primer tiempo en el formato SS MM HH\n");
    scanf("%d %d %d", &segundo1, &minuto1, &hora1);
    printf("Ahora ingrese el segundo tiempo en el mismo formato\n");
    scanf("%d %d %d", &segundo2, &minuto2, &hora2);
    horafinal=hora1+hora2;
    minutofinal=minuto1+minuto2;
    segundofinal=segundo1+segundo2;
    while(segundofinal>=60){
        segundofinal=segundofinal-60;
        minutofinal=minutofinal+1;
    }
    while(minutofinal>=60){
        minutofinal=minutofinal-60;
        horafinal=horafinal+1;
    }
    printf("La suma de ambos tiempos es %d segundos %d minutos %d horas", segundofinal, minutofinal, horafinal);
    return 0;
}