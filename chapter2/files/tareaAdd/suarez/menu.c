
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

        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, ",");
        float notas[3];
        for(int i = 0; i < 3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
        }

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
void modificarestudiante ()
{
    string nombreaModif = get_string("ingrese nombre que quiere modificar:");
    FILE *miArchivo = fopen ("datos.csv", "r");
    int tam = 50;
    char linea[tam];
    int nLinea = 0;
    int bandera = 0;
    while (fgets (linea, tam, miArchivo) != NULL)
    {
        nLinea = nLinea + 1;
        string nombre = strtok(linea, ",");
        // string apellido = strtok(NULL, ",");
        int resultado = strcmp(nombreaModif, nombre);
        if (resultado == 0)
        {
            bandera = 1;
            printf("linea del estudiante: %d\n", nLinea);
            break;
        }
    }
    fclose(miArchivo);
    if(bandera == 0)
    {
        printf("no hay coincidencias\n");
    }
    else
    {
        // pedir datos nuevos al usuario
        // abrir archivo de datos en modo lectura
        // abrir archivo temporal en modo escritura
        // Copiar linea a linea
            // si la linea es la que se necesita modificar, no copiar de un archivo al otro sino escribir los datos que puso el usuario

    }


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
        accion = get_char("¿Qué desea hacer?: ");
        if(accion == 'V')
        {

            imprimirLista(dataFile);
        }
        if(accion == 'A')
        {

           añadirestudiantes(dataFile);
        }
        if(accion == 'M')
        {

           modificarestudiante();
        }
        if(accion == 'P')
        {
            printf("Aquí vemos los promedios\n");
        }
        if(accion == 'S')
        {
            salir = 'Y';
        }

        salir = get_char("Desea salir(S/N): ");
    }
}