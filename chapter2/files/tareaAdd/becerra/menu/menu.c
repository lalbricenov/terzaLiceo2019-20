// Programa que escucha lo que el usuarioquiere ser
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
void menuPrincipal(void)
{
     printf("ver lista: V\n");
     printf("añadir estudiante: A\n");
     printf("modificar estudiante: M\n");
     printf("ver promedios: P\n");
     printf("salir: S\n");
     printf("************************************\n");
}
void iprimirLista(FILE* archivo)
{
     int tam = 50;
     char linea[tam];
     while(fgets(linea, tam, archivo)!= NULL)
     {
          //leemos en cada linea,y en cada una separamos por comas
          string nombre =strtok(linea, ",");
          string apellido = strtok(NULL, ",");
          float notas[3];
          for(int i = 0; i < 3;i ++)
          {
              notas[i] = atof(strtok(NULL, ","));
          }
          printf("%s\n", linea);
     }

    fclose(archivo);
    FILE *dataFile;
    dataFile = fopen("datos.csv", "a+");
}
void añadirEstudiante(FILE* archivo)
{
    string n = get_string("Escribir nombre: ");
    string a = get_string("Escribir apellido:  ");
    float notas [3];
    for(int i = 0;i < 3; i++)
    {
        notas[i] = get_float("Escribir notas: ");
    }
    fprintf(archivo,"%s,%s,%.1f,%.1f,%.1f\n", n, a, notas[0], notas[1], notas[2]);
    fclose(archivo);
    FILE *dataFile;
    dataFile = fopen("datos.csv", "a+");
}
int main (void)
{
    FILE *dataFile;
    dataFile = fopen("datos.csv", "a+");
    char salir = 'N';
    while (salir == 'N' || salir == 'n')
    {
        char accion;
        menuPrincipal();
        accion = get_char("¿que desea hacer?: ");
        if(accion =='V')
        {
            printf("esta es la lista\n");
        }
        if (accion == 'A')
        {
           añadirEstudiante(dataFile);
        }
        if (accion == 'M')
        {
            printf("aqui modificamos un estudiente\n");
        }
        if (accion == 'P')
        {
            printf("aqui vemos el proemdo\n");
        }
        if (accion == 'S')
        {
             salir = 'y';
        }

    }
}