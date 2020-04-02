//programa que escucha lo que el usuario
// quiere
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h> //para el atof
#include <string.h> //para el strtok

void menuPrincipal (void)
{
    printf("**********************************\n");
    printf("Ver lista: V\n");
    printf("Añadir estudiante: A\n");
    printf("Modificar estudiante: M\n");
    printf("Ver promedios: P\n");
    printf("Salir: S\n");
    printf("**********************************\n");
}
void imprimirlista(FILE * archivo)
{
    int tam = 50;
    char linea[tam];
    while(fgets(linea, tam, archivo) != NULL) //!= diferente a. NULL: apuntador nulo, no mas lineas para leer
    {
        //leer cada linea y en cada una separamos
        //por comas
        string nombre = strtok(linea, ",");
        string apellido = strtok(NULL, ",");
        float notas[3];
        for(int i = 0; i < 3; i++)
        {
            notas[i] = atof(strtok(NULL, ","));
        }
        printf("%s\t%s\t%1.f\t%1.f\t%1.f\n", nombre, apellido, notas[0], notas[1], notas[2]); // \t para tabular (separar y alinear)
    }

}

void anadirEstudiante(FILE * archivo)
{
    archivo = fopen("datos.csv", "a");
    string nombre = get_string("Ingrese el nombre del estudiante: ");
    string apellido = get_string("Ingrese el apellido del estudiante: ");
    float notas[3];
    for(int j = 0; j < 3; j++)
    {
        notas[j] = get_float("Ingrese las notas: ");
    }
    fprintf(archivo, "\n%s\t%s\t%1.f\t%1.f\t%1.f\n", nombre, apellido, notas[0], notas[1], notas[2]);
    fclose(archivo);

}


int main(void)
{
    FILE * datafile;
    datafile = fopen("datos.csv", "r");
    char salir ='N';
    while(salir == 'N' || salir == 'n' )
    {
        char accion;
        menuPrincipal();
        accion = get_char("¿Qué desea hacer?: ");
        if(accion == 'V')
        {
            //printf("Esta es la lista\n");
            imprimirlista(datafile);
        }
        if(accion == 'A')
        {
            //printf("Aqui añadimos un estudiante\n");
            anadirEstudiante(datafile);
        }
        if(accion == 'M')
        {
            printf("Aqui modificamos un estudiante\n");
        }
        if(accion == 'P')
        {
            printf("Aqui vemos los promedios\n");
        }
        if(accion == 'S')
        {
            salir = 'Y'; //que salir sea diferente a S o N
        }

        //ver lista
        //añadir estudiante
        //modificar estudiante
        //ver promedio
        //salir
        salir = get_char("Desea salir (S/N): ");
    }
}
