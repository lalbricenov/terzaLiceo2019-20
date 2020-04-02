#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
struct Paralelepipedo {
    float a;
    float b;
    float c;
    char nombre;
};

int main(void)
{
    struct Paralelepipedo paral1;
    struct Paralelepipedo paral2;
    //printf("%lu\n", sizeof(paral1));
    //printf("%lu\n", sizeof(paral2));
    paral1.a = 1.2;
    paral1.b = 2.3;
    paral1.c = 4.3;
    paral1.nombre = 'A';
    printf("%c: %f %f %f\n", paral1.nombre, paral1.a, paral1.b, paral1.c);

}