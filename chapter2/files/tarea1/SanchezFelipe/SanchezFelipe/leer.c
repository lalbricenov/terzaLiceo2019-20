#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{

    FILE *miArchivo;
    miArchivo = fopen("datos.csv", "r");
    char linea[80];
    for(int i=1; i<= 3; i++)
    {
    fgets(linea, 80, miArchivo);
    string nombres = strtok(linea,",");
    string apellidos = strtok(NULL,",");

    float notas[3];
    for(int s=0; s<3; s++)
    {

        notas[s] =atof( strtok(NULL,","));

    }
    float prom = (notas[0] + notas[1] + notas[2])/3;
    printf("El promedio de %s %s es: %f\n", nombres, apellidos, prom);
    }
    fclose(miArchivo);
}