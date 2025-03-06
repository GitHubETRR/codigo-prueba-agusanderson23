#include <stdio.h>

typedef struct{
    char Nombre[20];
    char Apellido[20];
    int Edad;
}Persona_t;

Persona_t Llenarstruct();

int main(){
    Persona_t Persona = Llenarstruct();
    printf("Su nombre es : %s\n", Persona.Nombre);
    printf("Su apellido es : %s\n", Persona.Apellido);
    printf("Su edad es : %d\n", Persona.Edad);
}

Persona_t Llenarstruct(){
    Persona_t Persona;
    printf("Ingrese su nombre\n");
    scanf("%s", Persona.Nombre);
    printf("Ingrese su apellido\n");
    scanf("%s", Persona.Apellido);
    printf("Ingrese su edad\n");
    scanf("%d", &Persona.Edad);
    return Persona;
}