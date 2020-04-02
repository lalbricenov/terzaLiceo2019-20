#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *miArchivo;
    miArchivo = fopen("datos.csv","a");
    fputs("\nNatalia, Melo, 8.0, 7.6, 9.0", miArchivo);

    //miArchivo = fopen("datos.csv","r");
    //for(int i=0; i<4;i++)
    //{
    //char linea [80];
    //fgets(linea,80,miArchivo);
    //printf(" %s\n",linea);
    //}




    fclose(miArchivo);

}