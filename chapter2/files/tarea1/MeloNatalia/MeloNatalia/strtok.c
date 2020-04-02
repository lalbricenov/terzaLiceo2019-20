#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *miArchivo;
    printf("Hola\n");
    miArchivo = fopen("datos.csv","r");

    //leo primera linea
    char linea [40];
    fgets(linea,40,miArchivo);

    printf("primera linea: %s\n",linea);
    string nombres = strtok (linea , ",");
    string apellidos = strtok (NULL ,",");//NULL presenta el apuntador nulo, porque strtok mantiene la referencia a la posicion del ultimo separador encontrado
    printf("Nombres: %s\n", nombres);
    printf("Apellido: %s\n", apellidos);
    float notas [3];
    for(int i = 0; i < 3; i++)
    {
        notas[i] = atof(strtok(NULL,","));
    printf("Notas: %f\n", notas[i]);

    }


    fclose(miArchivo);

}