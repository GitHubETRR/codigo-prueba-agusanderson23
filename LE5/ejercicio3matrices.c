#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>
#define N 10 

bool Es_Primo(int num);
void Matriz(int matriz[N][N]);
void Guardar_Primos(int matriz[N][N], int primos[], int *ContadorPrimos);
void Mostrar_Primos(int primos[], int ContadorPrimos);

int main() {
    int matriz[N][N];       
    int primos[N*N];        
    int ContadorPrimos = 0;  

    Matriz(matriz);

    Guardar_Primos(matriz, primos, &ContadorPrimos);

    Mostrar_Primos(primos, ContadorPrimos);

    return 0;
}

bool Es_Primo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void Matriz(int matriz[N][N]) {
    srand(time(NULL));  
    printf("Matriz generada:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100 + 1; 
            printf("%3d ", matriz[i][j]);    
        }
        printf("\n");
    }
}

void Guardar_Primos(int matriz[N][N], int primos[], int *ContadorPrimos) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (Es_Primo(matriz[i][j])) {
                primos[*ContadorPrimos] = matriz[i][j];
                (*ContadorPrimos)++;                     
            }
        }
    }
}

void Mostrar_Primos(int primos[], int ContadorPrimos) {
    printf("\nNúmeros primos encontrados:\n");
    for (int i = 0; i < ContadorPrimos; i++) {
        printf("%d ", primos[i]);
    }
    printf("\n");
}