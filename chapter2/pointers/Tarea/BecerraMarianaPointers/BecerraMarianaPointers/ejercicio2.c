#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

void intercambio (int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}


int main(void)
{
    int a1 = get_int ("numero entero:");
    int b1 = get_int ("otro numero entero: ");
    printf("%d %d\n", a1, b1);
    intercambio(&a1, &b1);
    printf("%d %d\n", a1, b1);
}