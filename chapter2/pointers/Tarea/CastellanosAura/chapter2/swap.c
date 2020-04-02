#include <stdio.h>
#include <cs50.h>
#include <math.h>

void swap (int a, int b)
{
    int c =a;
    a = b;
    b = c;
}

int main (void)
{
    int x = 4;
    int y = 5;
    printf ("%d %d\n", x, y);
    swap(x,y);
    printf ("%d %d\n", x, y);
}
