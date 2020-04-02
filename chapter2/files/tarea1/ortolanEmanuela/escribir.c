#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    FILE * miArchivo;
    miArchivo = fopen("datos.csv", "r");

    char linea [40];
    fgets(linea, 40, miArchivo);
    {
        string nombres = strtok (linea,",");
        string apellidos = strtok (NULL,  ",");
    float prom;
    float sum = 0;
    float notas[3];
    for (int i = 0 ; i < 3; i++)
    {
         notas [i] = atof (strtok(NULL,","));
         sum = sum + notas[i];
    }
    prom = sum/3;
    printf("Nombre: %s\n", nombres);
    printf("Apellidos: %s\n", apellidos);
    printf("promedio: %f\n", prom);
    }


}