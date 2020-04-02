#include <math.h>
#include <stdio.h>

int main(void)
{
   double suma = 0;
   for(int i = 1; i<=1000; i++){
   suma += pow(- 1, i + 1) / (2 * i - 1);
   }
   suma = 4 * suma;

   printf("%.3f\n", suma);
}





