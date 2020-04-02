#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
int main (void)
{

     FILE* datos;
         datos = fopen("datos.csv","r");
            char linea [80];
             for (int l = 0; l<3; l++)
    {
        fgets(linea, 80 , datos);
        printf("la linea recibida fue %s\n", linea);

    string nombres = strtok(linea,",");
    string apellidos = strtok(NULL,",");
    float notas[3];
    float promedio = 0;
    for( int i = 0; i< 3; i++)
    {
        notas[i] = atof(strtok(NULL,","));
        promedio = promedio + notas[i];
    }
    promedio = promedio / 3;
    printf( "nombres %s\n",nombres );
    printf( "apellidos %s\n",apellidos );
    printf ("promedio %f\n", promedio);
    }
    fclose( datos);
}