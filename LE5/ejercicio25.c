#include <stdio.h>
#include <math.h>

int main(){
   int horas, antiguedad, sueldoneto, sueldo, plus;
   
   printf("Ingrese la cantidad de horas trabajadas:\n");
   scanf("%d", &horas);
   printf("Ingrese los años de antiguedad del trabajador:\n");
   scanf("%d", &antiguedad);
   
   sueldo = horas * 4500;
   plus = (sueldo/100)* 2 * antiguedad;
   sueldoneto = sueldo + plus;

   printf("El sueldo neto del trabajador es de %d", sueldoneto);

   return 0;
}