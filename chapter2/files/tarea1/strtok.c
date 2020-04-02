#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    //Crear el apuntador al archivo
    FILE *miArchivo;
    // Pongo el apuntador a apuntar al archivo
    miArchivo = fopen("datos.csv", "r");

    //Leo la primera línea
    char linea[40];
    fgets(linea, 40, miArchivo);
    //Imprimo la línea leida
    printf("Primera linea: %s\n", linea);
    // obtengo el primer token(columna)
    string nombres = strtok(linea, ",");
    string apellidos = strtok(NULL,",");
    float notas[3];
    for(int i = 0; i < 3; i++)
    {
        // atof convierte string to float
        notas[i] = atof(strtok(NULL,","));
    }
    // NULL representa el apuntador nulo, porque
    // strtok mantiene la referencia a la posición
    // del último separador encontrado.

    printf("Nombres: %s\n", nombres);
    printf("Apellidos: %s\n", apellidos);
    fclose(miArchivo);
}