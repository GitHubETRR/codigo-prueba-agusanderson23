#include <stdio.h>
#include <math.h>

int main(){
   unsigned int numero, cifra1, cifra2, cifra3;
   
   printf("Porfavor, ingrese un numero entero de 3 cifras:\n");
   scanf("%d", &numero);
   
   cifra1 = numero / 100;
   cifra2 = (numero % 100) / 10;
   cifra3 = numero % 10;
   
   printf("Las 3 cifras de tu numero son: %d %d %d", cifra1, cifra2, cifra3);

   return 0;
}