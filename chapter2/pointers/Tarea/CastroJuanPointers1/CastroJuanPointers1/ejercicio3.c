#include <stdio.h>
#include <cs50.h>

void intercambio (int *n1, int *n2)
{
        int n3 = *n1;
        *n1 = *n2;
        *n2 = n3;
}

int main ()
{
    int n1 = get_int ("ingrese un numero: ");
    int n2 = get_int ("ingrese otro numero: ");
    if (n1 > n2)
    {
        intercambio (&n1,&n2);
    }
    else n2 = n1;
    printf("%d %d\n", n1, n2);

}