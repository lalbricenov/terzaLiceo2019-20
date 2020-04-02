#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{

    FILE *miArchivo;
    miArchivo = fopen("datos.csv", "a");
    fputs ("\nFelipe,Sanchez,7.8,8.4,5.7,8.6", miArchivo);
    fclose(miArchivo);
}