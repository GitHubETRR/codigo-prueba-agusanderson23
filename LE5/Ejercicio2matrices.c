#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void Matriz_Random(int matriz[N][N]);
int Contador(int matriz[N][N]);
void Ubicacion(int valormax, int matriz[N][N]);

int main(){
    int matriz[N][N], valormax;
    
    Matriz_Random(matriz);
    valormax = Contador(matriz);
    Ubicacion(valormax, matriz);
    
    return 0;
}
void Matriz_Random(int matriz[N][N]){
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 15 + 1; 
            printf("%2d ", matriz[i][j]);  
        }printf("\n");
    }
}

int Contador(int matriz[N][N]){
    int valormax=0, contador=0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (matriz[i][j] > valormax){
                valormax = matriz[i][j];
                contador=0;
            }
            if (matriz[i][j] == valormax){ 
            contador++;
            }
        }
    }
    printf("El valor maximo se repite %d veces.\n", contador);
    return valormax;
}
    
void Ubicacion(int valormax, int matriz[N][N]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] == valormax) {
                printf("En la fila %d y en la columna %d hay un valor maximo\n", i + 1, j + 1);
            }
        }
    }
}
