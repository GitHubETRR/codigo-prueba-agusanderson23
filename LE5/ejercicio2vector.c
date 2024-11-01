#include <stdio.h>

#define SIZE 10

void ingresarNumeros(int vector[], int size);
int calcularSuma(int vector[], int size);
float calcularPromedio(int suma, int size);
int encontrarMaximo(int vector[], int size);
int encontrarMinimo(int vector[], int size);

int main() {
    int vector[SIZE];

    printf("Ingrese %d números enteros:\n", SIZE);
    ingresarNumeros(vector, SIZE);


    int suma = calcularSuma(vector, SIZE);
    float promedio = calcularPromedio(suma, SIZE);
    int maximo = encontrarMaximo(vector, SIZE);
    int minimo = encontrarMinimo(vector, SIZE);

    printf("\nResultados:\n");
    printf("Suma: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);
    printf("Valor máximo: %d\n", maximo);
    printf("Valor mínimo: %d\n", minimo);

    return 0;
}

void ingresarNumeros(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
}

int calcularSuma(int vector[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += vector[i];
    }
    return suma;
}

float calcularPromedio(int suma, int size) {
    return (float)suma / size;
}

int encontrarMaximo(int vector[], int size) {
    int maximo = vector[0];
    for (int i = 1; i < size; i++) {
        if (vector[i] > maximo) {
            maximo = vector[i];
        }
    }
    return maximo;
}

int encontrarMinimo(int vector[], int size) {
    int minimo = vector[0];
    for (int i = 1; i < size; i++) {
        if (vector[i] < minimo) {
            minimo = vector[i];
        }
    }
    return minimo;
}
  