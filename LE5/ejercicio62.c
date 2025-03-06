#include <stdio.h>
#include <math.h>

void verificar_primo(int num);
void mostrar_contador(int num);

int main()
{
    int num;
    printf("Bienvenido, ingrese un número: ");
    scanf("%d", &num);

    verificar_primo(num); 
    mostrar_contador(num);  

    return 0;
}

void verificar_primo(int num)
{
    int raiz = sqrt(num), cont = 0;
    float a, b;

    if (num == 1)
    {
        printf("Su número no es primo\n");
        return;
    }

    do
    {
        a = num / raiz;
        b = (float)num / raiz;
        raiz--;
        cont++;
    } while (a != b);

    raiz = sqrt(num);
    
    if (cont < raiz)
    {
        printf("Su número no es primo\n");
    }
    else
    {
        printf("Su número es primo\n");
    }
}

void mostrar_contador(int num)
{
    int raiz = sqrt(num), cont = 0;
    float a, b;

    do
    {
        a = num / raiz;
        b = (float)num / raiz;
        raiz--;
        cont++;
    } while (a != b);

    printf("Contador: %d\n", cont);
}