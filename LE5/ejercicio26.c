#include <stdio.h>
#include <math.h>

int main(){
   unsigned int numero, cifra;
   
   printf("Ingrese un numero entero de 2 o mas cifras:\n");
   scanf("%d", &numero);
   
   if(10<numero){
       cifra = numero % 10;
       printf("La ultima cifra de tu numero es: %d", cifra);
   }else{
       printf("El numero debe ser de 2 cifras o más y ser positivo");
   }

   return 0;
}