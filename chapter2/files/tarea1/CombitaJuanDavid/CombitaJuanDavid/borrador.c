#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    //Crear el apuntador al archivo con variable de tipo file
    FILE *miArchivo;
    //Pongo el aputnador a apuntar al archivo
    miArchivo = fopen("datos.csv", "r");

    //leo lla primera linea
    char linea[40];
    fgets(linea, 40, miArchivo);
    //Imprimo la línea leída
    printf("Primera LINEA: %s\n", linea);
    // obtengo el primer token(columna)
    string nombres = strtok(linea,",");
     string apellidos = strtok(NULL,",");
     float notas[3];
     for(int i = 0 ; i <3 ; i++)
     {
         // atof convierte sring to float
         notas[i] = atof(strtok(NULL,",")) ;

     }
     // NULL representa el apuntador nulo. porque
    // NULL represent< EL APUNTADOR NULO, PORQUE
    //Strtok mantiene la referencia a la posición
    // del último separador encontrado.
    fclose(miArchivo);
}