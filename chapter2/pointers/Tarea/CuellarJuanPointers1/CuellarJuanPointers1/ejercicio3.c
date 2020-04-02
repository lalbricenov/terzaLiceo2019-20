#include <stdio.h>
#include <cs50.h>
#include <math.h>

void swap(int *x, int *y)
{

    if ( *x > *y)
    {
        int c = *x;
        *x = *y;
        *y = c;
    }
    else
    *x = *y;
}

int main(void)
{
    int x = get_int ("Ingrese el primer número: ");
    int y = get_int ("Ingrese el primer número: ");
    printf ("%d %d\n", x, y);
    swap (&x, &y);
    printf ("%d %d\n", x, y);
}