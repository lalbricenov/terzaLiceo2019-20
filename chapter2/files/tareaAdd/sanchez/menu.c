
//Programa que escucha lo que el usuario quiere hacer
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>


void menuPrincipal(void)
{
    printf ("# # # # # # # # # # # # # #\n");
    printf ("# ");
    printf("Ver lista: V            #\n");
    printf ("# ");
    printf("Añadir estudiante: A    #\n");
    printf ("# ");
    printf("Modificar estudiante: M #\n");
    printf ("# ");
    printf("Ver Promedios: P        #\n");
    printf ("# ");
    printf("Salir: S                #\n");
    printf ("# # # # # # # # # # # # # #\n");
}
void imprimirLista(FILE* archivo)
{
    int tam= 50;
    char linea[tam];
    while(fgets(linea, tam, archivo) != NULL)//! quiere decir diferente
    {
        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, ",");
        float notas[3];
        for(int i = 0; i<3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
        }
        printf("%s\t%s\t%.1f\t%.1f\t%.1f\n", nombre, apellido, notas[0], notas[1], notas[2]);
    }
    fclose(archivo);
     FILE *dataFile;
    dataFile = fopen("datos.csv","a+");
}
void añadirEstudiante(FILE* archivo)
{
    string a = get_string ("Escriba el nombre: \n");
    string b = get_string ("Escriba el apellido: \n");
    float notas[3];
    for(int i= 0; i<3; i++)
    {
        notas[i] = get_float ("Escriba la nota: \n");
    }

  fprintf(archivo, "%s, %s, %.1f, %.1f, %.1f \n", a, b, notas[0], notas[1], notas[2]);
  fclose(archivo);
  FILE *dataFile;
  dataFile = fopen("datos.csv","a+");

}
int main(void)
{
    FILE *dataFile;
    dataFile = fopen("datos.csv","a+");
    int salir = 'N';
    while(salir == 'N' || salir == 'n')
    {
        //ver lista
        // añadir estudiante
        //modificar estudiante
        //ver promedios
        //salir
        char accion;
        menuPrincipal();
        accion = get_char("¿Qué desea hacer?: ");
        if(accion == 'V'|| accion == 'v')
        {
            //printf("Esta es la lista\n");
            imprimirLista(dataFile);
        }
        if(accion == 'A'|| accion == 'a')
        {
            añadirEstudiante(dataFile);
        }
        if(accion == 'M'|| accion == 'm')
        {
            printf("Aquí modificamos un estudiante\n");
        }
        if(accion == 'P'|| accion == 'p')
        {
            printf("Aquí vemos los promedios\n");
        }
        if(accion == 'S'|| accion == 's')
        {
            salir= 'Y';// hago que salir sea diferente a 'N'
        }
        //salir = get_char("Desea salir(S/N): ");
    }
}