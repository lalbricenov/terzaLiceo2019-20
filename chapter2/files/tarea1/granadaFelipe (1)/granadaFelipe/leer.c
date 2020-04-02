#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{

    FILE* datos;
    datos = fopen("datos.csv", "r");
    //fgetc lee el siguinte caracter
    //fgets lee la siguiente linea de texto
    //fseek se mueve a cierta posicion
    char linea [80];
    for(int y = 0; y < 3; y++)
    {
        fgets(linea, 80 , datos);
        printf("La linea recibida es: %s\n", linea);
        //fclose(miarchivo);

        string nombres = strtok(linea, ",");
        string apellidos = strtok(NULL, ",");
        float notas[3];
        float promedio = 0;
        for(int i = 0; i < 3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
            promedio = promedio + notas[i];
            //x = (notas[i] + notas[i] + notas[i])/3;
            //printf("%f\n", promedio);
            //printf("%f\n", notas[i]);
        }
        promedio = promedio/3;
        printf("Nombres: %s\n", nombres);
        printf("Apellidos: %s\n", apellidos);
        printf("Promedio: %f\n", promedio);
        //fclose(datos);
    }
    fclose(datos);
}