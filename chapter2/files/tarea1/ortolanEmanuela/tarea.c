#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    string estudiante;
    float nota;

    FILE *fptr;
    fptr = fopen("datos.csv","a");
    estudiante = get_string("nombre y apellido ");

    fprintf(fptr,"%s ", estudiante);

    for (int x = 1; x <=3; x++)
    {
        nota = get_float("inserte la nota: ");
        fprintf(fptr,", %f, ", nota);
    }

    fclose(fptr);
}