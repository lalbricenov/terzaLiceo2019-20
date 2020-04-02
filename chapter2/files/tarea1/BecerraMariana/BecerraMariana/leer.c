#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    FILE *miArchivo;
    miArchivo = fopen("datos.csv", "r");
    for(int i=0;i<3 ;i++)
    {
        char linea[40];
        fgets(linea, 40,miArchivo);//file gets s
        printf("Primera linea: %s\n", linea);//obtengo el primer token (columna)

        string nombres= strtok(linea, ",");
        string apellidos = strtok(NULL, ","); //NULL representa el apuntador nulo, porque strtok mantiene la referencia a la posición del ultimo separador encontrado.
        float notas[3];
        for(int j=0;j<3 ;j++)
        {
            //atof convierte string en for
            notas[j] = atof(strtok(NULL, ","));
        }
        float prom = (notas[0]+notas[1]+notas[2])/3;
        printf("nombres: %s\n", nombres);
        printf("apellidos: %s\n", apellidos);
        printf("Promedio: %f\n", prom);

    }
    fclose(miArchivo);
























































}