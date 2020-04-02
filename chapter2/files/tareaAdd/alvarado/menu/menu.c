
//Programa que escucha lo que el usuario quiere hacer

#include<stdlib.h>
#include<stdio.h>
#include<cs50.h>
#include<string.h>


void menuPrincipal(void)
{
    printf("*********************************************************************\n");
    printf("Ver lista: V\n");
    printf("Añadir estudiante: A\n");
    printf("Modificar estudiante: M\n");
    printf("Ver promedios: P\n");
    printf("Salir: S\n");
    printf("*********************************************************************\n");
}
void imprimirLista(FILE* archivo)
{
    int tam = 50;
    char linea[tam];
    while(fgets(linea, tam, archivo) != NULL)
    printf("%s\n", linea);
    {
        // Leemos cada línea, y en cada una separados
        // por comas
        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, ",");
        float notas[3];
        for(int i = 0; i < 3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
        }
        // En este caso NULL indica que
        // iniciamos desde donde terminó el strtok anterior
        printf("%s\t%s\t%.1f\t%.1f\t%.1f\n", nombre, apellido, notas[0], notas[1], notas[2]);

    }
}

void añadirestudiantes(FILE*archivo)
{
    string n = get_string("Escribir nombre");
    string a = get_string("Escribir apellido");
    float notas [3];
    for(int i= 0; i<3;i++)
        {
        notas[i]= get_float("escribir notas: ");
        }
        fprintf(archivo,"%s,%s,%.1f,%.1f,%.1f",n,a,notas[0],notas[1],notas[2]);
        fclose(archivo);
        FILE*dataFile;
        dataFile = fopen("datos.csv","a+");
}
int main(void)
{
    char salir = 'N';
    while(salir == 'N' || salir == 'n')
    {
        FILE *dataFile;
        dataFile = fopen("datos.csv", "r");
        char accion;
        menuPrincipal();
        accion = get_char("¿Qué deasea hacer?: ");
        if(accion == 'V')
        {
            // printf("Esta es la lista\n");
            imprimirLista(dataFile);
        }
        if(accion == 'A')
        {

           añadirestudiantes(dataFile);
        }
        if(accion == 'M')
        {
            printf("Aquí modificamos un estudiante\n");
        }
        if(accion == 'P')
        {
            printf("Aquí vemos los promedios\n");
        }
        if(accion == 'S')
        {
            salir = 'Y';// Hago que salir sea diferente a 'N'
        }
        // ver lista
        // añadir
        // modificar estudiante
        // Ver promedios
        // salir
        salir = get_char("Desea salir(S/N): ");
    }
}

