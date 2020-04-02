#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *miArchivo;
    miArchivo = fopen("datos.csv","r");

//leo primera linea
     for (int t = 0; t<3; t++)
     {
          char linea [40];
    fgets(linea,40,miArchivo);

   // printf("primera linea: %s\n",linea);
    string nombres = strtok (linea , ",");
    string apellidos = strtok (NULL ,",");//NULL presenta el apuntador nulo, porque strtok mantiene la referencia a la posicion del ultimo separador encontrado
    printf("Nombres: %s\n", nombres);
    printf("Apellido: %s\n", apellidos);
    float notas [3];
    float s = 0;
    for(int i = 0; i < 3; i++)
    {
        notas[i] = atof(strtok(NULL,","));
    printf("Notas: %f\n", notas[i]);

    }

    float promedio = (notas[0] + notas[1] + notas[2])/3;
    printf ("promedio: %f\n ", promedio);

     }



    fclose(miArchivo);



}





