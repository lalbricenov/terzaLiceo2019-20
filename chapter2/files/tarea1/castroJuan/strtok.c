#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    FILE *miArchivo;
    miArchivo = fopen ("datos.csv", "r");

    char linea [40];

    for (int z = 0; z < 3; z++)
    {
        fgets (linea, 40, miArchivo);
        string nombres = strtok(linea, ",");
        string apellidos = strtok(NULL, ",");
        printf ("Estudiante %s %s\n", nombres, apellidos);
        float nota [3];
        float suma = 0;
        int x = 3;
        for (int i = 0; i < x; i++)
        {
                nota[i] = atof(strtok (NULL, ","));
                suma = suma + nota[i];
        }
        float promedio = suma/x;
        printf ("promedio: %f\n", promedio);
    }

}
