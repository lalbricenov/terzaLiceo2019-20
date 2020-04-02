#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

void menuPrincipal(void)
{
    printf("*********\n");
    printf("Ver lista: oprima V\n");
    printf("Añadir estudiante: oprima A\n");
    printf("Modificar Estudiante: oprima M\n");
    printf("Ver promedios: oprima P\n");
    printf("Salir: oprima S\n");
}
void verLista(FILE *miArchivo)
{
    miArchivo = fopen ("datos.csv", "r");
    char linea [40];
    for (int z = 0; z < 3; z++)
    {
        fgets (linea, 40, miArchivo);
        string nombres = strtok(linea, ",");
        string apellidos = strtok(NULL, ",");
        printf ("%s %s\t", nombres, apellidos);
        float nota [3];
        int x = 3;
        for (int i = 0; i < x; i++)
        {
            nota[i] = atof(strtok (NULL, ","));
            printf("%.1f, ", nota[i]);
        }
        printf("\n");
    }
}

void añadirEst (FILE *fptr)
{
   string nombre;
   string apellido;
   float nota;
   int nNotas;


   fptr = fopen("datos.csv","a");

   nombre = get_string("inserte nombre: ");
   apellido = get_string("inserte apellido: ");
   nNotas = get_int("ingrese la cantidad de notas: ");
   fprintf(fptr,"\n");
   fprintf(fptr,"%s ", nombre);
   fprintf(fptr,"%s", apellido);
   for (int x = 0; x<nNotas; x++)
   {
    nota = get_float("ingrese nota: ");
    fprintf(fptr,", %.1f", nota);
   }

   fclose(fptr);
}

void verPromedio (FILE*miArchivo)
{
    //FILE *miArchivo;
    miArchivo = fopen ("datos.csv", "r");
    char linea [40];

    for (int z = 0; z < 3; z++)
    {
        fgets (linea, 40, miArchivo);
        string nombres = strtok(linea, ",");
        string apellidos = strtok(NULL, ",");
        printf ("%s %s\t", nombres, apellidos);
        float nota [3];
        float sum = 0;
        int x = 3;
        for (int i = 0; i < x; i++)
        {
                nota[i] = atof(strtok (NULL, ","));
                sum = sum+nota[i];
        }
        float prom = sum/x;
        printf ("%.1f\n", prom);
    }
}
int main ()
{
    FILE *miArchivo = NULL;
    char salir = 'N';
    while (salir =='N'|| salir == 'n')
    {
        menuPrincipal();
        printf("************\n");
        char accion = get_char("Qué desea hacer: ");
        if(accion=='V')
        {
            verLista(miArchivo);
        }
        if (accion=='A')
        {
            añadirEst(miArchivo);
        }
        if (accion =='M')
        {
            printf("modificar estudiante\n");
        }
        if (accion =='P')
        {
            verPromedio(miArchivo);
        }
        if(accion=='S')
        {
            accion = 'Y';
        }
        salir = get_char("desea salir (Si/No): ");

    }
}