#include <stdio.h>
#define CALIFICACIONMAX 10
#define CALIFICACIONAPROBADA 7
int PedirAlumnos();
void CalcularYMostrar(int CantidadAlumnos);
int PedirCalificaciones(int CantidadAlumnos, int Calificaciones[]);
void ContarAlumnosAprobados(int Calificaciones[], int CantidadAlumnos);

int main(){
    int CantidadAlumnos = PedirAlumnos();
    float Calificaciones[CantidadAlumnos];
}
int PedirAlumnos(){
    int CantidadAlumnos;
    printf("Ingrese la cantidad de alumnos\n");
    scanf("%d", &CantidadAlumnos);
    return CantidadAlumnos;
}
void Calcular_Y_Mostrar(float Calificaciones[], int CantidadAlumnos, float SumaCalificaciones){
    float CalificacionAlta;
    float CalificacionBaja = CALIFICACIONMAX;
    float Promedio;
    for(int i = 0; i < CantidadAlumnos; i++){
        if (Calificaciones[i] > CalificacionAlta){
            CalificacionAlta = Calificaciones[i];
        }
        
    }
    for(int i = 0; i < CantidadAlumnos; i++){
        if (Calificaciones[i] < CalificacionBaja){
            CalificacionBaja = Calificaciones[i];
        }
    }
    Promedio = (float) SumaCalificaciones / CantidadAlumnos;
    printf("La calificacion mas baja fue %f", CalificacionBaja);
    printf("La calificacion mas alta fue %f", CalificacionAlta);
    printf("El promedio de calificaciones fue %f", Promedio);
}
int PedirCalificaciones(int CantidadAlumnos, float Calificaciones[]){
    float SumaCalificaciones;
    for(int i = 0; i < CantidadAlumnos; i++){
        printf("Ingrese las calificaciones de los alumnos\n");
        scanf("%f", SumaCalificaciones);
        return SumaCalificaciones;
    }
}
void ContarAlumnosAprobados(int Calificaciones[], CantidadAlumnos){
    int AlumnosAprobados=0;
    for(int i = 0; i < CantidadAlumnos ; i++){
        if(Calificaciones[i] => CALIFICACIONAPROBADA){
            AlumnosAprobados++;
        }
    }
    printf("Alumnos aprobados: %d\n", AlumnosAprobados);
}