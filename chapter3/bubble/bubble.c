#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

void imprimirArray(int array[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    //
    int tam = 20;
    int estudiantes[tam];
    int nEstudiante;
    for(int i = 0; i < tam; i++)
    {
        //printf("%d\n", RAND_MAX);
        nEstudiante = 1 + rand() % 17;
        estudiantes[i] = nEstudiante;
        // printf("%d\n", nEstudiante);
    }
    imprimirArray(estudiantes, tam);

    //Se debe pasar tam - 1 veces
    // Comparar por parejas, hasta llegar a los números seguros
    // Cambiar de posición si es necesario
    for(int nPasada = 0; nPasada < tam - 1; nPasada++)
    {
        for(int indiceIzq = 0; indiceIzq < tam - 1 - nPasada; indiceIzq++)
        {
            // Comparar la pareja, e intercambiarlos si es necesario
            if(estudiantes[indiceIzq] > estudiantes[indiceIzq + 1])
            {
                int temp = estudiantes[indiceIzq];
                estudiantes[indiceIzq] = estudiantes[indiceIzq + 1];
                estudiantes[indiceIzq + 1] = temp;
            }
        }
        imprimirArray(estudiantes, tam);
    }
}