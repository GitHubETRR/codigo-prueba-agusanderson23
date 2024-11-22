#include <stdio.h>

struct Alumno {
    char Nombre[20];
    char Apellido[20];
    char TragoFav[30];
    int Internas;
    int Quebradas;
    int Vasos;  
};

int leerNumero() {
    int num;
    while (scanf("%d", &num) != 1) {
        while (getchar() != '\n');  
        printf("Por favor, ingrese un número entero válido: ");
    }
    return num;
}

void datosAlumno(struct Alumno* alumno) {
    printf("Escriba su nombre\n");
    scanf("%s", alumno->Nombre);  
    printf("Escriba su apellido\n");
    scanf("%s", alumno->Apellido);  
    printf("¿Cual es su trago favorito?\n");
    scanf("%s", alumno->TragoFav); 
    printf("¿Cantidad de internas?\n");
    alumno->Internas = leerNumero();  
    printf("¿Cantidad de quebradas?\n");
    alumno->Quebradas = leerNumero();  
    printf("¿Cantidad de vasos tomados?\n");
    alumno->Vasos = leerNumero();  
}

void mostrarAlumno(struct Alumno alumno) {
    printf("Nombre: %s\n", alumno.Nombre);
    printf("Apellido: %s\n", alumno.Apellido);
    printf("Trago favorito: %s\n", alumno.TragoFav);
    printf("Internas: %d\n", alumno.Internas);
    printf("Total de quebradas: %d\n", alumno.Quebradas);
    printf("Cantidad de vasos tomados: %d\n", alumno.Vasos);

    if (alumno.Quebradas > 0) {
        double promedio = (double)alumno.Vasos / alumno.Quebradas;
        printf("Promedio de vasos por quebrada: %.2f\n", promedio);
    } else {
        printf("No se ingresaron quebradas, no se puede calcular el promedio.\n");
    }
}

int main() {
    struct Alumno alumno1;
    datosAlumno(&alumno1);
    mostrarAlumno(alumno1);
    return 0;
}