#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

struct Estudiante{
    string nombre;
    int edad;
    float notas[5];
};
void imprimirEst(struct Estudiante est)
{
    printf("Nombre: %s\n", est.nombre);
    printf("Edad: %d\n", est.edad);
    printf("Notas: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%f ", est.notas[i]);
    }
    printf("\n");
}
int main(void)
{
    struct Estudiante Granada;
    struct Estudiante Alvarado;
    Granada.nombre = get_string("Ingrese nombre: ");
    Granada.edad = get_int("Ingrese edad: ");
    for(int i = 0; i < 5; i++)
    {
        Granada.notas[i] = get_float("Ingrese nota: ");
    }
    Alvarado.nombre = get_string("Ingrese nombre: ");
    Alvarado.edad = get_int("Ingrese edad: ");
    for(int i = 0; i < 5; i++)
    {
        Alvarado.notas[i] = get_float("Ingrese nota: ");
    }

    imprimirEst(Alvarado);
    imprimirEst(Granada);
}