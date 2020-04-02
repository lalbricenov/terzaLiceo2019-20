#include <stdio.h>
#include <math.h>

double suma(double n)
{
    double suma = 0;
    for(int i = 0; i<=n; i++)
    {
        suma += 2*pow(-1, i) * pow(3, 0.5 - i) / (2 * i + 1);
    }
    return suma;
}

int main(void)
{
    for(int n = 0; n<=50; n++)
    {
        printf("%d %.15f\n", n, suma(n));
    }
}