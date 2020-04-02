// programaque escucha lo que el usuario
// quiere haver

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

void menuPrincipal(void)
{
    printf("ver lista: V\n");
    printf("añadir estudiante: A\n");
    printf("modificar estudiante: M\n");
    printf("ver promedios: P\n");
    printf("salir: S\n");
    printf("-----------------------------------------\n");
}

void imprimirLista(FILE* archivo)
{
    int tam = 50;
    char linea[tam];
    while(fgets(linea, tam, archivo) != NULL)
    {
        // leemos en cada linea, y en cada una
        // separamos por comas
        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, ",");
        float notas[3];
        for(int i = 0; i < 3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
        }
        // en este caso NULL indica que
        // iniciamos desde donde terminó el strtok anterior
        printf("%s\t%s\t%.1f\t%.1f\t%.1f\n", nombre, apellido, notas[0], notas[1], notas[2]);
    }
    fclose(archivo);
    FILE *dataFile;
    dataFile = fopen("datos.csv", "a+");

}
void añadirEstudiante(FILE* archivo)
{
    string n = get_string("escribir nombre: ");
    string a = get_string("escribir apellido: ");
    float notas[3];
    for(int i = 0; i < 3; i++)
    {
        notas[i] = get_float("escribir notas: ");
    }
    fprintf(archivo, "%s,%s,%.1f,%.1f,%.1f\n", n, a, notas[0], notas[1], notas[2]);
    fclose(archivo);
    FILE *dataFile;
    dataFile = fopen("datos.csv", "a+");

}


int main(void)
{
    FILE *dataFile;
    dataFile = fopen("datos.csv", "a+");
    char salir = 'N';
    while(salir == 'N' || salir == 'n')
    {
        char accion;
        menuPrincipal();
        accion = get_char("¿que desea hacer?: ");
        if (accion == 'V')
        {
            //printf("esta es la lista\n");
            imprimirLista(dataFile);
        }
        if (accion == 'A')
        {
            añadirEstudiante(dataFile);
        }
        if (accion == 'M')
        {
            printf("aqui modificamos un estudiante\n");
        }
        if (accion == 'P')
        {
            printf("aqui vemos el promedio\n");
        }
        if (accion == 'S')
        {
            salir = 'y';


        }
        // verlista
        // añadir estudiante
        // modificar estudiante
        // ver promedios
        // salir
        // salir = get_char("desea salir(S/N): ");

    }

}