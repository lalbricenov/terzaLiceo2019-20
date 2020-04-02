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

    // Se busca la posición en la que debe ir el siguiente elemento no ordenado
    // para esto se intercambia hasta llevarlo a su posición
    // cuando el número de elementos ordenados llegue
    for (int nOrdenados = 0; nOrdenados < tam; nOrdenados++)
    {
        int siguiente = estudiantes[nOrdenados];// es el siguiente después de los que ya están ordenados
        // Se debe comparar con los que ya están ordenados, comenzando desde el que está a su lado
        for(int j = nOrdenados - 1; j > -1; j--)
        {
            if(estudiantes[j] > siguiente)
            {
                estudiantes[j + 1] = estudiantes[j];
                estudiantes[j] = siguiente;
            }
            else
                break;// Si es mayor que el que tiene a su izquierda parar.
        }
        imprimirArray(estudiantes, tam);
    }

}