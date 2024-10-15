#include <stdio.h>

void Recibir_Numeros(int i, int vector[5]);
void Devolver_Numeros(int i, int vector[5]);
int main() {
    int vector[5];
    int i;
    Recibir_Numeros(i, vector);
    Devolver_Numeros(i, vector);

    
    return 0;
}
void Recibir_Numeros(int i, int vector[5]){
    printf("Ingrese 5 números enteros:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

void Devolver_Numeros(int i, int vector[5]){
    printf("\nLos números ingresados son:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: %d\n", i + 1, vector[i]);
    }
}
