#include <stdio.h>
#include <cs50.h>

void swap (int *x, int *y)
{
    int c = *x;
    *x = *y;
    *y = c;
}

int main (void)
{
    int x = get_int("Ingrese un numero: ");
    int y = get_int("Ingrese un numero: ");

    if (x > y)
    {
        swap (&x, &y);
    }
    else x = y;

    printf ("%d %d\n", x, y);

}