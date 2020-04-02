#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    FILE*miArchivo;
    miArchivo = fopen("datos.csv", "r");
    for (int nL = 0; nL < 3; nL++)
    {
    char linea[40];
    fgets(linea, 40 , miArchivo);
    printf("%s\n", linea);
    string nombres = strtok(linea, ",");
    string apellidos = strtok(NULL,",");

    float notas[3];
    float suma = 0;
    for(int i = 0; i < 3; i++)
    {
        notas[i] = atof(strtok(NULL, ","));
        suma = suma + notas[i];
    }
    suma = suma/3;
    printf("Nota: %f\n", suma);
    }

    fclose(miArchivo);
}