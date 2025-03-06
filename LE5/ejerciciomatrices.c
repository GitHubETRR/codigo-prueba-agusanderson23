#include <stdio.h>

#define N 10

void MatrizRandom(int matriz[N][N]);
void MostrarMatriz(int matriz [N][N]);

int main(){
    int matriz[N][N];
    MatrizRandom(matriz);
    MostrarMatriz(matriz);
    
    return 0;
}

void MatrizRandom(int matriz[N][N]){
    int i, j;
    srand(time(NULL));
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            matriz[i][j] = rand() % 100 +1;
        }
    }
}
void MostrarMatriz(int matriz [N][N]){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d ", matriz [i][j]);
        }
        printf("\n");
    } 
}