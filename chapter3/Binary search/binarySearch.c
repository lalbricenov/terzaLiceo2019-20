#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(long pABuscar, int primos[], int N)
{
    for(int i = 0; i < N; i++)
    {
        if(pABuscar == primos[i])
        {
            return i;
        }
    }

    return -1;// A este punto sólo se llega si no se encuntró el número buscado
}

int main(void)
{
    FILE * primosArchivo = fopen("primes1.txt", "r");
    int N = 1000000;
    int primos[N];
    char linea[200];
    int i = 0;
    while(fgets(linea, 200, primosArchivo) != NULL)
    {
        if(i+7 >= N)
            break;
        // printf("%s\n", linea);
        sscanf(linea, "%d %d %d %d %d %d %d %d", &(primos[i]), &(primos[i+1]), &(primos[i+2]), &(primos[i+3]), &(primos[i+4]), &(primos[i+5]), &(primos[i+6]),
        &(primos[i+7]));
        i += 8;
    }
    char salir = 'N';
    long pABuscar = get_int("Ingrese el número a buscar: ");
    // printf("%d\n", RAND_MAX);
    // clock_t begin = clock();
    // for (int nPrueba = 1; nPrueba <= 10000; nPrueba++)
    // {
    //     if (nPrueba%500 == 0) printf("Buscados: %.f%%\n", nPrueba/10000.*100);
    //     pABuscar = rand();
    int pos = linearSearch(pABuscar, primos, N);
    if ( pos == -1)
    {
        printf("El número buscado no es primo\n");
    }else
    {
        printf("El número buscado es el primo número %d\n", pos + 1);
    }

        // if (pos != -1)
        // {
        //     printf("El número buscado es el primo número: %d\n", pos + 1);
        // }
        // else
        // {
        //     printf("El número no es primo\n");
        // }
    // }
    // clock_t end = clock();
    // double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    // printf("Tiempo empleado linear search: %.3f\n", time_spent);
    // while (salir != 'Y' && salir != 'y')
    // {
    //     pABuscar = get_long("Ingrese el número que desea buscar: ");
    //     int pos = linearSearch(pABuscar, primos, N);
    //     if (pos != -1)
    //     {
    //         printf("El número buscado es el primo número: %d\n", pos + 1);
    //     }
    //     else
    //     {
    //         printf("El número no es primo\n");
    //     }

    //     salir = get_char("Desea salir: ");
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     primos[i] = fscanf(primosArchivo, "%d ", &(primos[i]));
    // }
    fclose(primosArchivo);
    // for (int j = 0; j < 1000; j++)
    // {
    //     printf("%d\t", primos[j]);
    // }
}