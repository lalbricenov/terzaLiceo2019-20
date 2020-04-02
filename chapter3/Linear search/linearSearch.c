#include <stdio.h>
#include <cs50.h>

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
    fclose(primosArchivo);

    int nABuscar = get_int("Ingrese el número a buscar en la lista de primos: ");
    for (int n = 0; n < N; n++)
    {
        if (nABuscar == primos[n])
        {
            printf("Número encontrado en la posición %d\n", n);
            break;
        }
    }
}

