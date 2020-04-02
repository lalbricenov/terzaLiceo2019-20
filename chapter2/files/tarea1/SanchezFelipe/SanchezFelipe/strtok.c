#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    //crear el apuntador al archivo
    FILE *miArchivo;
    //pongo el apuntador a apuntar al archivo
    miArchivo = fopen("datos.csv", "r");
    //leo la primera linea
    char linea[40];
    fgets(linea, 40, miArchivo);
    printf("Primera linea: %s\n", linea);

    //obtengo el primer token(columna)
    string nombres = strtok(linea,",");//escribo que quiero separa, como lo quiero separar
    string apellidos = strtok(NULL,",");//NULL representa el apuntador nulo, porque strtok mantiene la referencia de la posición del ultimo separador encontrado
    printf("Nombres: %s\n", nombres);
    printf("Apellidos: %s\n", apellidos);
    float notas[3];
    for(int i=0; i<3; i++)
    {
        //atof convierte string to float
        notas[i] =atof( strtok(NULL,","));

    }

    fclose(miArchivo);
}