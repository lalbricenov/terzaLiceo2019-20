#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
struct estudiante {
    string nombre;
    int edad;
    float notas[5];
};

void imprimirEstudiante(struct estudiante est)
{
    printf("Nombre: %s\n", est.nombre);
    printf("Edad: %d\n", est.edad);
    printf("Notas: ");
    for(int i = 0;  i<5; i++)
    {
        printf("%f ", est.notas[i]);
    }
    printf("\n");
}
int main(void)
{
    int nEstudiantes = 4;
    struct estudiante lista[nEstudiantes];
    for(int i = 0; i<nEstudiantes; i++)
    {
        struct estudiante est;
        est.nombre=get_string("Ingrese el nombre: ");
        est.edad = get_int("Ingrese la edad: ");
        for (int j=0; j<5; j++)
        {
            est.notas[j] = get_float("Ingrese nota: ");
        }
        lista[i] = est;
    }
    for(int i=0; i<nEstudiantes; i++)
    {
        imprimirEstudiante(lista[i]);
    }

}