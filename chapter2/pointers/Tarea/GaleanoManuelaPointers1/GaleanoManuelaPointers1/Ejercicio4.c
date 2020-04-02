#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
//imprime el tamaño que ocupan en memoria todos los tipos de variable en C
int main(void)
{
    printf ("%lu\n", sizeof(char));
    printf ("%lu\n", sizeof(float));
    printf ("%lu\n", sizeof(int));
    printf ("%lu\n", sizeof(long));
    printf ("%lu\n", sizeof(double));

}
