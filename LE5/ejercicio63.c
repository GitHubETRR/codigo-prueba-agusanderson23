#include <stdio.h>

void multiplo(int a, int b);
void areaRectangulo(float base, float altura);

int main()
{
    int num1, num2;
    float base, altura;

    printf("Ingrese dos números para verificar si el primero es múltiplo del segundo:\n");
    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);

    multiplo(num1, num2);  

    printf("\nIngrese los valores de base y altura para calcular el área del rectángulo:\n");
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);

    areaRectangulo(base, altura);

    return 0;
}

void multiplo(int a, int b)
{
    if (a % b == 0)
    {
        printf("%d es múltiplo de %d\n", a, b);
    }
    else
    {
        printf("%d no es múltiplo de %d\n", a, b);
    }
}

void areaRectangulo(float base, float altura)
{
    float area = base * altura;
    printf("El área del rectángulo es: %.2f\n", area);
}