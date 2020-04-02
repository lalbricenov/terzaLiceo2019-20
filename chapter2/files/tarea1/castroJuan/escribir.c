#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main()
{
   string nombre;
   string apellido;
   float nota;
   int nNotas;

   FILE *fptr;

   fptr = fopen("datos.csv","a");

   nombre = get_string("inserte nombre: ");
   apellido = get_string("inserte apellido: ");
   nNotas = get_int("ingrese la cantidad de notas: ");
   fprintf(fptr,"\n");
   fprintf(fptr,"%s ", nombre);
   fprintf(fptr,"%s", apellido);
   for (int x = 0; x<nNotas; x++)
   {
    nota = get_float("ingrese nota: ");
    fprintf(fptr,", %.1f", nota);
   }

   fclose(fptr);
}