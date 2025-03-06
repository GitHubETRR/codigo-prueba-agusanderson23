#include <stdio.h>
#define CALIFICACIONMAX 10
#define CALIFICACIONAPROBADA 7
#define CALIFICACIONMIN 0

int PedirAlumnos();
float PedirCalificaciones(int CantidadAlumnos, float Calificaciones[]);
void CalcularYMostrar(float Calificaciones[], int CantidadAlumnos, float SumaCalificaciones);
void ContarAlumnosAprobados(float Calificaciones[], int CantidadAlumnos);

int main() {
    int CantidadAlumnos = PedirAlumnos();
    float Calificaciones[CantidadAlumnos];
    float SumaCalificaciones = PedirCalificaciones(CantidadAlumnos, Calificaciones);
    CalcularYMostrar(Calificaciones, CantidadAlumnos, SumaCalificaciones);
    ContarAlumnosAprobados(Calificaciones, CantidadAlumnos);

    return 0;
}

int PedirAlumnos() {
    int CantidadAlumnos;
    printf("Ingrese la cantidad de alumnos:\n");
    scanf("%d", &CantidadAlumnos);
    return CantidadAlumnos;
}

float PedirCalificaciones(int CantidadAlumnos, float Calificaciones[]) {
    float SumaCalificaciones = 0;
    for (int i = 0; i < CantidadAlumnos; i++) {
        printf("Ingrese la calificación del alumno %d:\n", i + 1);
        scanf("%f", &Calificaciones[i]);
        SumaCalificaciones += Calificaciones[i];
    }
    return SumaCalificaciones;
}

void CalcularYMostrar(float Calificaciones[], int CantidadAlumnos, float SumaCalificaciones) {
    float CalificacionAlta = CALIFICACIONMIN;
    float CalificacionBaja = CALIFICACIONMAX;
    float Promedio;

    for (int i = 0; i < CantidadAlumnos; i++) {
        if (Calificaciones[i] > CalificacionAlta) {
            CalificacionAlta = Calificaciones[i];
        }
        if (Calificaciones[i] < CalificacionBaja) {
            CalificacionBaja = Calificaciones[i];
        }
        printf("%f  ", Calificaciones[i]);
    }printf("\n");
    Promedio = SumaCalificaciones / CantidadAlumnos;

    printf("\nLa calificación más baja fue: %f\n", CalificacionBaja);
    printf("La calificación más alta fue: %f\n", CalificacionAlta);
    printf("El promedio de calificaciones fue: %f\n", Promedio);
}

void ContarAlumnosAprobados(float Calificaciones[], int CantidadAlumnos) {
    int AlumnosAprobados = 0;
    for (int i = 0; i < CantidadAlumnos; i++) {
        if (Calificaciones[i] >= CALIFICACIONAPROBADA) {
            AlumnosAprobados++;
        }
    }
    printf("Cantidad de alumnos aprobados: %d\n", AlumnosAprobados);
}