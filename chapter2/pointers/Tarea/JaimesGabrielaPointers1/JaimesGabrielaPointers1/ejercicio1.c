#include<stdio.h>
#include <stdlib.h>

int main(void)
{
   int a = 2;
   int b = 4;
   int c = 8;

   int *aP = &a;
   int *bP = &b;
   int *cP = &c;

   printf("%d %d %d\n", a, b, c);


}




//Escriba un programa que cree 3 variables de tipo entero, con valores 2, 4 y 8.
//Luego cree 3 apuntadores de tipo entero, uno para cada una de las variables anteriores.
//Imprima los 3 apuntadores.