#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("datos.csv", "a");

   fputs("\nJuan Sebastián, Cuéllar, 8.5, 9.0, 8.0", fp);


   fclose(fp);

   return(0);
}