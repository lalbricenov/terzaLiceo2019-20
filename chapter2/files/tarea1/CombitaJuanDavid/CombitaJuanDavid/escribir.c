#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{

    FILE *miArchivo;
    miArchivo = fopen("datos.csv", "a");  // a append, no se utiliza ni "r" ni "w"
    fputs("\nJuan David,Combita,7.2,8.5,6.9", miArchivo );
    fclose(miArchivo);
}
