//Programa que escucha lo que el usuario quiere hacer

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>


void menuPrincipal(void)
{
        printf ("****************\n");
        printf ("Ver lista: V\n");
        printf ("Añadir estudiante: A\n");
        printf ("Modificar estudiante: M\n");
        printf ("Ver promedios: P\n");
        printf ("Salir: S\n");
        printf ("****************\n");
}
void imprimirLista(FILE* archivo)
{
    int tam = 50;
    char linea [tam];
    printf ("Nombre   \tApellido   \tNota 1\tNota 2\tNota 3\n");
    while (fgets(linea, tam, archivo) != NULL)
    {
        //leemos cada linea y en cada una separamos por comas

        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, ",");
        float notas[3];
        for (int i = 0; i < 3; i++)
        {
            notas [i] = atof (strtok(NULL, ","));
        }
        // en este caso NULL indica
        //que iniciamos desde donde terminó el strtok anterior
        printf ("%s\t%s\t%.1f\t%.1f\t%.1f\n", nombre, apellido, notas[0], notas [1], notas [2]);
    }
}
void añadirEstudiante(FILE* archivo)
{
    FILE *dataFile;
    dataFile = fopen("datos.csv", "a");
    string Nombre = get_string ("Introduzca el nombre del estudiante: ");
    string Apellido = get_string ("Introduzca el apellido: ");
    float notas [3];
    for (int i = 0; i < 3; i++)
    {
        notas [i] = get_float ("Escriba las notas: ");
    }

    fprintf(archivo, "%s,%s,%.1f,%.1f,%.1f\n", Nombre, Apellido, notas [0], notas [1], notas [2]);
    fclose(archivo);

}

int main(void)
{
    FILE *dataFile;
    dataFile = fopen ("datos.csv", "r");
    char salir = 'N';
    while(salir == 'N' || salir == 'n')
    {
        char accion;
        menuPrincipal();
        accion = get_char ("¿Qué desea hacer? ");

        if(accion == 'V')
        {
            //printf ("Esta es la lista\n");
            imprimirLista(dataFile);
        }
        if(accion == 'A')
        {
            //printf ("Aquí añadimos un estudiante\n");
            añadirEstudiante(dataFile);
        }
        if(accion == 'M')
        {
            printf ("Aquí modificamos un estudiante\n");
        }
        if(accion == 'P')
        {
            printf ("Aquí vemos los promedios\n");
        }
        if(accion == 'S')
        {
            salir = 'y';
        }
        //Ver lista
        //Añadir estudiante
        //Modificar estudiante
        //Ver promedios
        //Salir
        //Salir = get_char("Desea salir: (S/N)");
    }
}
