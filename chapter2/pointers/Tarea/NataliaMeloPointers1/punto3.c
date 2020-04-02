#include <stdio.h>
#include <cs50.h>

void valores (int *a, int *b)
{
    int c = *a;
    if (*a > *b)
    {
       *a = *b;
       *b = c;
    }
    if (*b > *a)
    {
     *b = c;
    }


}
int main(void)
{
    int valor1 = get_int ("numero entero: ");
    int valor2 = get_int ("otro numero entero ");
    valores(&valor1, &valor2);
    printf("%d %d\n", valor1, valor2);
}