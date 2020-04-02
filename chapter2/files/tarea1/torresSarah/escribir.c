#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    string nombre;
    string apellido;
    float notas;

    FILE *fptr;
    fptr = fopen("datos.csv","a"); // añadir
    nombre = get_string("El nombre es: ");
    apellido = get_string("El apellido es: ");

    fprintf(fptr, "\n");
    fprintf(fptr,"%s ", nombre);
    fprintf(fptr,"%s ,", apellido);

    for (int i = 0; i<3; i++)
    {
        notas = get_float("Ingrese nota: ");
        fprintf(fptr,"%.2f, ", notas);
    }
    fclose(fptr);
}