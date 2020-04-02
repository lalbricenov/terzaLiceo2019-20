// Usando la función sizeof escriba un programa que imprima el tamaño que ocupan en la memoria todos los tipos de variable en C: char, int, long, float, double. Para esto vaya a la referencia adjunta.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
}