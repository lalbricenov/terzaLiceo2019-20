#include<stdio.h>
#include<cs50.h>
// Programa que modifica una linea en particular
// en un archivo de texto
int main(void)
{
    FILE *miArchivo = fopen("datos.csv", "r");
    FILE *temporal = fopen("temp.tmp", "w");
    // Revisando que el archivo si fue abierto
    if (miArchivo == NULL || temporal == NULL)
    {
        printf("Error al abrir archivo\n");
        return 1;// Con esto indicamos que hubo
        // un error
    }
    // Leer linea a linea y copiar de datos.csv
    // a temp.tmp. Y en la linea que se desea
    // modificar escribir lo que se desea escribir
    int nLineaAModif = 5;
    int tam = 100;
    char linea[tam];
    int nLinea = 0;
    while(fgets(linea, tam, miArchivo) != NULL)
    {
        nLinea = nLinea + 1;// nLinea++
        if(nLinea != nLineaAModif)
        {
            fputs(linea, temporal);
        }
        else
        {
            fprintf(temporal, "HOLA\n");
        }

    }

    fclose(miArchivo);
    fclose(temporal);
}