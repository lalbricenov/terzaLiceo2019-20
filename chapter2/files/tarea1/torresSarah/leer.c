// #include <stdio.h>
// #include <cs50.h>
// #include <stdlib.h>

// int main(void)
// {
//     FILE *miArchivo;
//     miArchivo = fopen("datos.csv", "r");// modo lecturA

//     char linea[40];
//     fgets(linea, 40, miArchivo);
//     printf("Primera linea: %s\n", linea);

//     char linea2[40];
//     fgets(linea2, 40, miArchivo);
//     printf("Segunda linea: %s\n", linea2);

//     char linea3[40];
//     fgets(linea3, 40, miArchivo);
//     printf("Tercera linea: %s\n", linea3);


// }

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
        printf ("Estudiante: %s %s\n", nombres, apellidos);
        float nota [3];
        float suma = 0;
        int x = 3;
        for (int i = 0; i < x; i++)
        {
                nota[i] = atof(strtok (NULL, ","));
                suma = suma + nota[i];
        }
        float promedio = suma/x;
        printf ("El promedio es: %f\n", promedio);
    }

}



