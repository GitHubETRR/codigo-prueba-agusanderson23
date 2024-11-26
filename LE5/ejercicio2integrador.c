#include <stdio.h>
#include <string.h>

#define MAX_EMPLEADOS 5

typedef struct {
    char nombre[50];
    int edad;
    float salario;
} Empleado;

int ingresarDatos(Empleado empleados[], int cantidad);
void procesarDatos(Empleado empleados[], int cantidad);
void mostrarDatos(Empleado empleados[], int cantidad);

int main() {
    Empleado empleados[MAX_EMPLEADOS];
    int cantidad = 0;
    int opcion;

    do {
        printf("\n--- Menú ---\n");
        printf("1. Ingresar datos de un empleado.\n");
        printf("2. Procesar y mostrar información relevante.\n");
        printf("3. Salir.\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                if (cantidad < MAX_EMPLEADOS) {
                    cantidad = ingresarDatos(empleados, cantidad); 
                } else {
                    printf("No se pueden ingresar más empleados.\n");
                }
                break;
            case 2:
                if (cantidad > 0) {
                    procesarDatos(empleados, cantidad);
                } else {
                    printf("No hay empleados ingresados para procesar.\n");
                }
                break;
            case 3:
                printf("¡Hasta luego!\n");
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}


int ingresarDatos(Empleado empleados[], int cantidad) {
    printf("Ingrese el nombre del empleado: ");
    scanf(" %[^\n]", empleados[cantidad].nombre);
    printf("Ingrese la edad del empleado: ");
    scanf("%d", &empleados[cantidad].edad);
    printf("Ingrese el salario del empleado (en dólares): ");
    scanf("%f", &empleados[cantidad].salario);

    cantidad++; 
    printf("Datos ingresados correctamente.\n");
    return cantidad; 
}


void procesarDatos(Empleado empleados[], int cantidad) {
    float sumaSalarios = 0;
    int indiceMayorSalario = 0;

    for (int i = 0; i < cantidad; i++) {
        sumaSalarios += empleados[i].salario;
        if (empleados[i].salario > empleados[indiceMayorSalario].salario) {
            indiceMayorSalario = i;
        }
    }

    float promedio = sumaSalarios / cantidad;

    printf("\n--- Información de Empleados ---\n");
    mostrarDatos(empleados, cantidad);
    printf("\nPromedio de salarios: $%.2f\n", promedio);
    printf("Empleado con el salario más alto: %s\n", empleados[indiceMayorSalario].nombre);
}

void mostrarDatos(Empleado empleados[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("%d. Nombre: %s, Edad: %d, Salario: $%.2f\n", 
               i + 1, empleados[i].nombre, empleados[i].edad, empleados[i].salario);
    }
}
