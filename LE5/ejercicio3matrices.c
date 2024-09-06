#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10 

 int main(){
    int matriz[N][N];
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100 + 1; 
            printf("%3d ", matriz[i][j]);  
            bool esPrimo=es_primo(matriz[i][j]);
        }printf("\n");
    }
    return 0;
}

bool es_primo(int num)
{
    bool esPrimo;
    int raiz, cont=0;
    float a,b;
    raiz=sqrt(num);
    do
    {
        a=num/raiz;
        b=(float)num/raiz;
        raiz--;
        cont++;
    }
    while (a!=b);
    raiz=sqrt(num);
    if(num==1){ 
        esPrimo=false;
    }
    else{
        if(cont<raiz-1){
            esPrimo=false;
        }
        else{
            esPrimo=true;
        }
    }
    return esPrimo;
}