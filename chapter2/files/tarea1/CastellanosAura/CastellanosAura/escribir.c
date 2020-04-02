#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    string nombre;
    string apellido;
    float notas;

    FILE *fptr;
    fptr = fopen("datos.csv","a");
    nombre = get_string("Nombre: ");
    apellido = get_string("Apellido: ");

    fprintf(fptr,"%s ", nombre);
    fprintf(fptr,"%s ,", apellido);

    for (int i = 0; i<3; i++)
    {
        notas = get_float("Nota: ");
        fprintf(fptr,"%f, ", notas);
    }
    fclose(fptr);
}