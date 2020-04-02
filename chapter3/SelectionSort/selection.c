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

    // Se selecciona el elemento que va en la siguiente posición
    // para esto se busca el mínimo de los que todavía no están ubicados
    for (int nOrdenados = 0; nOrdenados < tam; nOrdenados++)
    {
        // Se busca el mínimo entre los que no han sido seleccionados
        int min = estudiantes[nOrdenados];// El primero después de los ordenados
        int posMin = nOrdenados;
        for (int j = nOrdenados + 1; j < tam; j++)
        {
            if (estudiantes[j] < min)
            {
                min = estudiantes[j];
                posMin = j;
            }
        }

        // Después de encontrarlo se intercambia con el que está en la posición nOrdenados
        // justo después de los ordenados
        estudiantes[posMin] = estudiantes[nOrdenados];
        estudiantes[nOrdenados] = min;
        imprimirArray(estudiantes, tam);
    }

}