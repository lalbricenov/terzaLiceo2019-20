#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
int main (void)
{

    FILE* datos;
    datos = fopen("datos.csv","r");
    //fgetc lle el siguinte caracter
    //fgets lee la siguiente linea de texto
    //fseek se mueve a cierta posicion
    char linea [80];
    for (int l = 0; l<3; l++)
    {
    fgets(linea, 80 , datos);
    printf("la linea recibida fue %s\n", linea);
    // fclose(miarchivo);

    string nombres = strtok(linea,",");
    string apellidos = strtok(NULL,",");
    float notas[3];
    float promedio = 0;
    for( int i = 0; i< 3; i++)
    {
        notas[i] = atof(strtok(NULL,","));
        promedio = promedio + notas[i];
        // x =(notas[i]+notas[i]+notas[i])/3;
        // printf ("%f\n",promedio);
        // printf("%f\n",notas[i]);
    }
    promedio = promedio / 3;
    printf( "nombres %s\n",nombres );
    printf( "apellidos %s\n",apellidos );
    printf ("promedio %f\n", promedio);
   // fclose( datos);
    }
    fclose( datos);
}