#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
    FILE *miArchivo;
    miArchivo = fopen("datos.csv", "r");

    char linea[40];
    for (int x = 0; x<3;x++)
    {
        fgets(linea, 40, miArchivo);
        //printf("Información Juan Camilo Rojas: %s\n", linea);
        string nombres = strtok(linea, ",");
        string apellidos = strtok(NULL, ",");
        float prom;
        float sum = 0;
        float notas[3];
        for(int i = 0; i < 3; i ++)
        {
            notas[i] = atof(strtok(NULL, ","));
            sum = sum + notas[i];
        }
        prom = sum/3;
        printf("Nombres: %s\n", nombres);
        printf("Apellidos: %s\n", apellidos);
        printf("promedio: %f\n", prom);
    }
}