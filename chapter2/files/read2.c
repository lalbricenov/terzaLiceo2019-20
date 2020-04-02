#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main(void)
{
    // Lee un archivo e imprime en la terminal
    // su contenido
    FILE *miArchivo;
    miArchivo = fopen("saludo.txt", "r");
    //fgetc lee el siguiente caracter
    //fgets lee la siguiente linea de texto
    //fread lee cierta cantidad de bytes
    //fseek se mueve a cierta posición
    char linea[80] ;
    fgets(linea, 80, miArchivo);
    printf("La linea recibida fue: %s\n", linea);

    fgets(linea, 80, miArchivo);
    printf("La linea recibida fue: %s\n", linea);
    //cierro el archivo
    fclose(miArchivo);
}