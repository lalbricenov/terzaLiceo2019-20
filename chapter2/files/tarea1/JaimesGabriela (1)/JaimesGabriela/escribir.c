#include <stdio.h>

int main(void)
{
   FILE *miArchivo;
   miArchivo = fopen("datos.csv", "a");
   fputs("\nGabriela, Jaimes, 8.5, 7, 10", miArchivo);
   fclose(miArchivo);

   return(0);


}