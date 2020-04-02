#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    FILE*miArchivo;
    miArchivo = fopen("datos.csv", "w");
    fputs(" Matteo, Mineo, 10, 9.7, 8.8", miArchivo);
    fclose(miArchivo);
}