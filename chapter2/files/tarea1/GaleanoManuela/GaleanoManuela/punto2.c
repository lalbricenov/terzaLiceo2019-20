#include <math.h>
#include <stdio.h>

int main(void)
{
    double suma = 0;
    int n = 0;

    for (int i = 0; i<= 37; i++)
    {
        suma += pow(- 1, i) * pow (3, 1/2 - i) / (2 * i + 1);
    }
    suma = suma * 2;
    printf("%.3f\n", suma);
}