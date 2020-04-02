#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    //crear apuntador al archivo
    FILE *miArchivo;
    //pongo el apuntador a apuntar el archivo
    miArchivo = fopen("datos.csv", "r");
    for (int i = 0; i < 3; i++)
    {
        //leo las lineas y las lineas
        char linea [40];
        fgets(linea, 40, miArchivo);
        printf(" %s\n", linea);

        //obtengo le primer token(columna)
        string nombres = strtok(linea, ",");
        string apellidos = strtok(NULL, ",");
        float notas[3];
        for(int j = 0; j < 3; j++)
         {
            //atof convierte string to float
            notas[j] = atof(strtok(NULL,","));
         }
         //NULL representa el apuntador que no apunta a algo, porque
         //strtok mantiene la referencia a la posición
         //del ultimo separador encontrado
         float promedio = (notas[0] + notas[1] + notas[2])/3;
         printf("nombres: %s\n", nombres);
         printf("apellidos: %s\n", apellidos);
         printf("promedio: %f\n", promedio);
    }
     fclose(miArchivo);



}