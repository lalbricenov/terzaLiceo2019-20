// programa con un bucle infinito que escucha lo que el usiario quiere hacer
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

void menuPrincipal(void)
{
        printf ("******************************\n");
        printf("ver lista: V\n");
        printf("Añadir estudiante: A\n");
        printf("Modificar estudiante: M\n");
        printf("Ver promedios: P\n");
        printf("Salir: S\n");
        printf ("******************************\n");
}
void imprimirLista(FILE* archivo)
{
    int tam = 50;
    char linea[tam];
    while (fgets(linea,tam,archivo) != NULL)
    {
        //  Leemo cada linea y en cada una separamos por comas
        string nombre = strtok(linea,",");
        string apellido = strtok (NULL,","); //en este caso NULL INDICA QUE INICIAMPS DESDE DONDE TERMINÓ EL STRIK ANTERIOR
        float notas[3];
        for (int i = 0; i < 3; i ++)
        {
            notas[i] = atof(strtok(NULL,","));
        }
        printf ("%s\t%s\t%1.f\t%1.f\t%1.f\n", nombre, apellido, notas[0], notas[1], notas[2]);
    }
}
void añadirEstudiante(FILE* archivo)
{
    archivo = fopen ("datos.csv", "a");

    string nombre = get_string("escribir nombre: ");
    string apellido = get_string ("escribir apellido: "); //en este caso NULL INDICA QUE INICIAMPS DESDE DONDE TERMINÓ EL STRIK ANTERIOR
    float notas[3];
    for (int i = 0; i < 3; i ++)
        {
            notas[i] = get_float ("escribir nota: ");
        }
    fprintf (archivo,"%s,%s , %1.f, %1.f, %1.f\n", nombre, apellido, notas[0], notas[1], notas[2]);
    //fputs("%s, %s, %1.f, %1.f, %1.f\n",archivo);
    fclose(archivo);

}
int main(void)
{
    //ver lista
    //añadir estudiante
    //modificar estudiante
    // ver promedios
    //salir
    FILE *dataFile;
    dataFile = fopen ("datos.csv", "r");
    char salir = 'N';
    while (salir == 'N' || salir == 'n')
    {
        char accion;
        menuPrincipal();
        accion = get_char("què desea hacer?:");
        if(accion == 'V')
        {
            //printf( "Esta en la lista\n");
            imprimirLista(dataFile);
        }
         if(accion == 'M')
        {
            printf( "Aqui modificamos un estudiante\n");
        }
         if(accion == 'P')
        {
            printf( "Aqui vemos los promedios\n");
        }
         if(accion == 'A')
        {
            //printf( "Aqui añadimos un estudiante\n");
            añadirEstudiante(dataFile);
        }
         if(accion == 'S')
        {
            ( salir = 'Y');
        }
        //ver lista, añadir estudiante, modificar estudiante, ver promedio
        // char salir = get_char("desea salir(S/N):");

    }
}