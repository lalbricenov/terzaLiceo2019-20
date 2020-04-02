#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

void MenuPrincipal(void)
{
        printf("***************");
        printf("Ver lista: V\n");
        printf("Añadir estudiante: A\n");
        printf("Modificar estudiante M\n");
        printf("Ver promedios: P\n");
        printf("Salir: S\n");
        printf("***************");
}
void imprimirLista(FILE* archivo)
{
    int tam = 50;
    char linea[tam];
    while(fgets(linea, tam, archivo) != NULL)
    {
        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, ",");
        float notas[3];
        for(int i = 0; i < 3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
        }
        printf("%s\t%s\t%.1f\t%.1f\t%.1f\n", nombre, apellido, notas[0], notas[1], notas[2]);
    }
}
int main(void)
{
    FILE *datafile;
    datafile = fopen("datos.csv", "a+");
    char salir = 'N';
    while(salir == 'N'|| salir == 'n')
    {
        char accion;
        MenuPrincipal();
        accion = get_char("¿Qué desea hacer?: ");
        if(accion == 'V')
        {
            printf("Esta es la lista\n");
        }
        if(accion == 'A')
        {
            printf("Aquí añadimos un estudiante\n");
            string n = get_string("Nombre: ");
            string a = get_string("Apellido: ");
            float n1 = get_float("Nota 1: ");
            float n2 = get_float("Nota 2: ");
            float n3 = get_float("Nota 3: ");
            fprintf(datafile, "%s, %s, %.1f, %.1f, %.1f\n", n, a, n1, n2, n3);
        }
        if(accion == 'M')
        {
            printf("Aquí modificamos un estudiante\n");
        }
        if(accion == 'P')
        {
            printf("Aquí vemos los promedios\n");
        }
        if(accion =='S')
        {
            salir = 'Y';
        }
        //verlista
        //añadir estydiante
        //modificar estudiante
        //ver promedios
        //salir
        salir = get_char("Desea salir(S/N): ");
    }
}