#include <stdio.h>
#define N 7
#define A 3
int matriz [N][A];
void LlenarMatriz(int matriz[N][A]);
void MostrarMatriz(int matriz[N][A]);

int main(){
    LlenarMatriz(matriz);
    MostrarMatriz(matriz);
}

void LlenarMatriz(int matriz[N][A]){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < A; j++){
            scanf("%i", &matriz[i][j]);
        }
    }
}
void MostrarMatriz(int matriz[N][A]){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < A; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }   
}
