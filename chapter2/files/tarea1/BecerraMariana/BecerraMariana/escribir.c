#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    FILE *miArchivo;
    miArchivo = fopen("datos.csv", "a");
    fputs ("\nMariana, Becerra, 10,10,7,8", miArchivo);
    fclose(miArchivo);
}