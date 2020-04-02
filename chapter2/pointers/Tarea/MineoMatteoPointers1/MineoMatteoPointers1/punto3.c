#include <stdio.h>
#include <cs50.h>
#include <math.h>

void swap(int *x, int *y)
{

    if(*x>*y)
    {
        int c = *x;
        *x = *y;
        *y = c;
    }
    else
    {
        *y=*x;
    }

}
int main(void)
{
    int x = get_int ("Ingrese un numero: ");
    int y = get_int ("Ingrese otro numero: ");
    printf("%d %d\n", x, y);
    swap(&x,&y);
    printf("%d %d\n", x, y);
}