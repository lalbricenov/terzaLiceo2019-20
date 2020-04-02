// programa que escucha lo que el usuario quiere hacer
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

void menuPrincipal(void)
{
    printf("**************************************\n");
    printf("Ver lista: V\n");
    printf("Añadir estudiante: A\n");
    printf("Modificar Estudiante: M\n");
    printf("Ver promedios: P\n");
    printf("Salir: S\n");
    printf("**************************************\n");
}

void imprimirLista(FILE* archivo)
{
    int tam = 50;
    char linea[tam];
    while(fgets(linea, tam, archivo) != NULL)
    {
        // leemos cada linea y en cada una separamos por comas
        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, ",");
        float notas[3];
        for (int i = 0; i < 3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
        }
        printf("%s\t%s\t%1f\n\t%1f\n\t%1f\n", nombre, apellido, notas[0], notas[1], notas[2]);
    }

}
void añadirEstudiante (FILE*Archivo)
{
    dataFile = fopen("datos.csv","a");
    string nombre = strtok("Ingrese nombre: \n");
    string apellido = strtok("Inserte el apellido: \n");
    float notas[3];
    for (int i = 0; i < 3; i++)
    {
        notas[i] = atof(strtok(NULL, ","));
    }
   printf("%s\t%s\t%1f\n\t%1f\n\t%1f\n", nombre, apellido, notas[0], notas[1], notas[2]);
}
int main(void)
{
    FILE *dataFile;
    dataFile = fopen("datos.csv","r");
    char salir= 'N';
    while(salir == 'N' || salir == 'n')
    {
        char accion;
        menuPrincipal();

        accion = get_char("¿Qué desea hacer?: \n");
        if(accion =='V')
        {
           // printf("Esta es la lista\n");
           imprimirLista(dataFile);

        }
        if(accion =='A')
        {
            printf("Aquí añadimos un estudiante\n");
        }
        if(accion =='M')
        {
            printf("Aquí modificamos el estudiante\n");
        }
        if(accion =='P')
        {
            printf("Aquí vemos los promedios\n");
        }
        if(accion =='S')
        {
        salir = 'Y';
        }
    }
}
