#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    string nombres;
    string apellidos;
    float notas;

    FILE *fptr;
    fptr = fopen("datos.csv","a");
    nombres = get_string("nombre completo ");
    apellidos = get_string("apellido ");

    fprintf(fptr,"%s ", nombres);
    fprintf(fptr,"%s ", apellidos);

    for (int x = 0; x <3; x++)
    {
        notas = get_float("nota ");
        fprintf(fptr,", %f, ", notas);
    }

    fclose(fptr);
}