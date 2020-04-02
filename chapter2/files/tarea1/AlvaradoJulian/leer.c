#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
string nombre;
string apellido;
float notas;
 FILE*fp;
  fp= fopen("datos.csv","r");
  nombre =get_string("ingrese nombre");
    apellido =get_string("ingrese apellido");
printf("%s",nombre);
printf("%s",apellido);
for(int i= 0; i<3; i++)
{
    notas = get_float("notas");
    printf("%f",notas);
}
    fclose( fp);


   }
