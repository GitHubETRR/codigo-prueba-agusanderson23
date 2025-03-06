#include <stdio.h>

int main(){
    int Numeros;
    printf("Ingrese 1 numero\n");
    scanf("%d", &Numeros);
    for(int i = 0; i < 10; i++){
        printf("El numero que elijio es %d\n", Numeros);
    }
    return 0;
}