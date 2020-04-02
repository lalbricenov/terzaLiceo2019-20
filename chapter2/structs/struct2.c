#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

struct Estudiante{
    string nombre;
    int edad;
    float promedio;
};
void imprimirEst(struct Estudiante est)
{
    printf("Nombre: %s\n", est.nombre);
    printf("Edad: %d\n", est.edad);
    printf("Promedio: %f\n", est.promedio);
}
int main(void)
{
    struct Estudiante Granada;
    struct Estudiante Alvarado;
    Granada.nombre = get_string("Ingrese nombre: ");
    Granada.edad = get_int("Ingrese edad: ");
    Granada.promedio = get_float("Ingrese promedio: ");

    Alvarado.nombre = get_string("Ingrese nombre: ");
    Alvarado.edad = get_int("Ingrese edad: ");
    Alvarado.promedio = get_float("Ingrese promedio: ");

    imprimirEst(Alvarado);
    imprimirEst(Granada);
}